#define  _CRT_SECURE_NO_WARNINGS 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
  
//
char **getMem(int num)
{
	int i = 0;
	char **p2 = NULL;
	p2 = (char **)malloc(sizeof(char *)*num);
	if (p2 == NULL)
	{
		return NULL;
	}
	for (i = 0; i < num; i++)
	{
		p2[i] = (char *)malloc(sizeof(char) * 100);//char buf[100]
		sprintf(p2[i], "%d%d%d", i + 1, i + 1, i + 1);
	}
	return p2;
}
void printArray03(char **arr, int num)
{
	int i = 0;
	for (i = 0; i < num; i++)
	{
		printf("%s ", *(arr + i));
	}
}
void sortArr03(char **p2, int num)
{
	int i = 0, j = 0;
	char tmpbuf[100];
	for (i = 0; i < num; i++)
	{
		for (j = i + 1; j < num; j++)
		{
			if (strcmp(p2[i], p2[j]) < 0)
			{
				strcpy(tmpbuf, p2[i]);
				strcpy(p2[i], p2[j]);
				strcpy(p2[j], tmpbuf);
			}
		}
	}
}
void main444()
{
	int i = 0, j = 0;
	char **p2 = NULL;
	int num = 5;
	char *tmp = NULL;
	p2 = getMem(num);/*(char **)malloc(sizeof(char *)*num);
	for (i = 0; i < num; i++)
	{
		p2[i] = (char *)malloc(sizeof(char) * 100);//char buf[100]
		sprintf(p2[i], "%d%d%d", i + 1, i + 1, i + 1);
	}*/
	//排序之前
	printf("排序之前:\n");
	printArray03(p2, num);
	/*for (i = 0; i < num; i++)
	{
		printf("%s \n", p2[i]);
	}*/
	//排序 交换的是指针
	/*for (i = 0; i < num; i++)
	{
		for (j = i + 1; j < num; j++)
		{
			if (strcmp(p2[i], p2[j]) < 0)
			{
				tmp = p2[i];
				p2[i] = p2[j];
				p2[j] = tmp;
			}
		}
	}*/
	//排序交换内存空间
	sortArr03(p2, num);

	//排序之后
	printf("排序之后:\n");
	printArray03(p2, num);
	//释放内存
	for (i = 0; i < num; i++)
	{
		if (p2[i] != NULL)
		{
			free(p2[i]);
			p2[i] = NULL;
		}
	}
	if (p2 != NULL)
	{
		free(p2);
	}
	printf("hello...\n");
	system("pause");
	return ;
}