#define  _CRT_SECURE_NO_WARNINGS 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
void printArr2_err(char **arr, int num)
{
	int i=0;
	for (i = 0; i < num; i++)
	{
		printf("%s\n", *(arr+i));
	}
}
void printArr2(char arr[10][30], int num)//可以用了
{
	int i = 0;
	for (i = 0; i < num; i++)
	{
		printf("%s\n", *(arr + i));
	}
}
void main0303()
{
	int i = 0, j = 0;
	int num = 4;
	char myBuf[30];
	char myArray[10][30] = { "aaaa","cccc","bbbb","11111111" };
	//printArr2(myArray, num);
	{
		int len1 = sizeof(myArray);
		int len2 = sizeof(myArray[0]);
		int len3 = len1 / len2;
		printf("len1: %d\n", len1);
		printf("len2: %d\n", len2);
		printf("len3: %d\n", len3);
	}
	//打印
	printf("排序之前:\n");
	for (i = 0; i < num; i++)
	{
		printf("%s\n", myArray[i]);
	}
	//排序
	for (i = 0; i < num; i++)
	{
		for (j = i + 1; j < num; j++)
		{
			if (strcmp(myArray[i], myArray[j]) > 0)
			{
				strcpy(myBuf, myArray[i]);
				strcpy(myArray[i], myArray[j]);
				strcpy(myArray[j], myBuf);
			}
		}
	}
	//打印
	printf("排序之前:\n");
	for (i = 0; i < num; i++)
	{
		printf("%s\n", myArray[i]);
	}
	system("pause");
	return ;
}