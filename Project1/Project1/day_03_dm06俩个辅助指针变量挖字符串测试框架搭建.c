#define  _CRT_SECURE_NO_WARNINGS 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int NewspitString(const char *buf1, char c, char buf2[10][30], int *count)
{
	char *p = NULL;
	char *pTem = NULL;
	int tmpcount = 0;
	//初始化p ptem
	p = buf1;
	pTem = buf1;
	do 
	{
		if ((p = strchr(p, c)) != NULL)
		{
			if (p - pTem > 0)
			{
				strncpy(buf2[tmpcount], pTem, p - pTem);
				buf2[tmpcount++][p - pTem] = '\0';
				p = pTem = p + 1;
			}
		}
		else
		{
			strcpy(buf2[tmpcount++], pTem);
			break;
		}
	} while (*p!='\0');
	//strcpy(buf2[tmpcount++], p);
	*count = tmpcount;
	return 0;
}
int spitString(const char *buf1, char c, char buf2[10][30], int *count)
{
	char *tmp = NULL;
	char *buf = buf1;
	
	int ncount = 0;
	while ((tmp = strchr(buf, c)) != NULL)
	{
		char buftmp[128] = {0};
		int i = 0;
		while (buf != tmp)
		{
			*(buftmp+i++) = *buf;
			buf++;
		}
		*(buftmp+i) = '\0';
		strcpy(buf2[ncount++], buftmp);
		buf += strlen(",");
	}
	strcpy(buf2[ncount++], buf);
	*count = ncount;
	/*strcpy(buf2[0], "aaaa");
	strcpy(buf2[1], "bbbb");
	*count = 2;*/
	return 0;
}
int NewspitString22(const char *buf1, char c, char **buf2, int *count)
{
	char *p = NULL;
	char *pTem = NULL;
	int tmpcount = 0;
	//初始化p ptem
	p = buf1;
	pTem = buf1;
	do
	{
		if ((p = strchr(p, c)) != NULL)
		{
			if (p - pTem > 0)
			{
				strncpy(buf2[tmpcount], pTem, p - pTem);
				buf2[tmpcount++][p - pTem] = '\0';
				p = pTem = p + 1;
			}
		}
		else
		{
			strcpy(buf2[tmpcount++], pTem);
			break;
		}
	} while (*p != '\0');
	//strcpy(buf2[tmpcount++], p);
	*count = tmpcount;
	return 0;
}
void main66666()
{
	int ret = 0, i = 0;
	//char *p1 = "abcdef,acccd,eeee,aaaaa,ssssss";
	char *p1 = "aa,bb";
	char cTem = ',';
	int nCount;

	//char myArray[10][30];
	char **myArray = NULL;
	myArray = (char **)malloc(sizeof(char *) * 10);
	for (i = 0; i < 10; i++)
	{
		myArray[i] = (char *)malloc(sizeof(char) * 30);
	}
	ret = NewspitString22(p1, cTem, myArray, &nCount);
	if (ret != 0)
	{
		printf("func spitString() err: %d \n", ret);
	}
	for (i = 0; i < nCount; i++)
	{
		printf("%s\n", myArray[i]);
	}
	for (i = 0; i < 10; i++)
	{
		free(myArray[i]);
	}
	free(myArray);
	printf("hello...\n");
	system("pause");
	return ;
}