#define  _CRT_SECURE_NO_WARNINGS 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int sort(char **myp1,/*in*/ int num1, char(*myp2)[30], int num2, char ***myp3, int *num3)
{
	int ret = 0;
	char **p3 = NULL;
	char *tmpP = NULL;
	int i = 0, j = 0, k = 0;
	int tmplen = 0;
	if (myp1 == NULL || myp2 == NULL || myp3 == NULL)
	{
		ret = -1;
		printf("func sort err %d (myp1 == NULL || myp2 == NULL || myp3 == NULL)\n", ret);
		return -1;
	}
	p3 = (char **)malloc((num1 + num2) * sizeof(char *));//里面装的是指针
	if (p3 == NULL)
	{
		return -1;
	}
	//根据
	for (i=0;i<num1;i++)
	{
		tmplen = strlen(myp1[i]) + 1;
		p3[i] = (char *)malloc(tmplen * sizeof(char));
		if (p3[i] == NULL)
		{
			return -2;
		}
		strcpy(p3[i], myp1[i]);
	}

	for (j = 0; j < num2; j++,i++)
	{
		tmplen = strlen(myp2[j]) + 1;
		p3[i] = (char *)malloc(tmplen * sizeof(char));
		if (p3[i] == NULL)
		{
			return -3;
		}
		strcpy(p3[i], myp2[j]);
	}
	tmplen = num1 + num2;
	//*num3 = num1 + num2;
	//排序

	for (i = 0; i < tmplen; i++)
	{
		for (j = i + 1; j < tmplen; j++)
		{
			if (strcmp(p3[i], p3[j]) > 0)
			{
				tmpP = p3[i];
				p3[i] = p3[j];
				p3[j] = tmpP;
			}
		}
	}
	*num3 = tmplen;
	*myp3 = p3;
	return 0;
}
void sortFree01(char **p, int len)
{
	int i = 0;
	if (p == NULL)
	{
		return;
	}
	for (i = 0; i < len; i++)
	{
		free(p[i]);
	}
	free(p);
	p = NULL;
}
void sortFree02(char ***myp, int len)
{
	int i = 0;
	char **p = NULL;
	if (myp = NULL)
	{
		return;
	}
	p = *myp;
	for (i = 0; i < len; i++)
	{
		free(p[i]);
	}
	free(p);
	*myp = NULL;
}
void main11()
{
	int i = 0;
	int ret;
	char *p1[] = { "a","bb","cc" };
	char buf2[10][30] = { "1111","333","22" };
	char **p3 = NULL;
	int len1=0, len2=3, len3=0;
	//printf("%d\n", sizeof(p1));
	//printf("%d\n", sizeof(*p1));
	len1 = sizeof(p1) / sizeof(*p1);
	//sort(p1,len1, char(*myp2)[30], int num2, char ***myp3, int *num3);
	ret=sort(p1, len1, buf2, len2, &p3, &len3);
	if (ret != 0)
	{
		printf("func sort() erro:%d", ret);
	}
	for (i = 0; i < len3; i++)
	{
		printf("%s\n", p3[i]);
	}
	sortFree01(p1,len1);
	sortFree01(buf2, len2);
	sortFree01(p3,len3);
	printf("hello...\n");
	system("pause");
	return ;
}