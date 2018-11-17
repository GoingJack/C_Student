#define  _CRT_SECURE_NO_WARNINGS 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void printArray(int *array, int num)
{
	for (int i = 0; i < num; i++)
	{
		printf("%d ", array[i]);
	}
}
void main3()
{
	int a[3][5];
	int i, j, tmp = 1;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			a[i][j] = tmp++;
		}
	}
	printArray((int *)a, 15);
	printf("hello...\n");
	system("pause");
	return ;
}
//void f(int a[5]) ===>> void f(int a[]) ===>> void f(int *a);
//void g(int a[3][3])  ====>> void g(int a[][3]) ==>> void g(int (*a)[3])


// 一维数组 char a[30]		指针 char *
//指针数组 char *a[30]		指针的指针 char **a
//二维数组	char a[10][30]		数组的指针 char(*a)[30]