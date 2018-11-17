#define  _CRT_SECURE_NO_WARNINGS 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void BubbleSort(int *arr,int num)
{
	int i, j,tmp;
	printf("元素的个数为%d\n", num);
	for (i = 0; i < num; i++)
	{
		for (j = i+1; j < num; j++)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}
void printArray(int *arr, int num)
{
	int i = 0;
	for (i = 0; i < num; i++)
	{
		printf("%d ", *(arr+i));
	}
}
void main0302()
{
	int a[] = { 5,4,3,2,1 };
	int num = sizeof(a) / sizeof(a[0]);
	BubbleSort(a,num);
	printArray(a, num);
	for (int i = 0; i < num; i++)
	{
		printf("%d ", a[i]);
	}
	//int num = 0;
	//int i = 0;
	//int j = 0;
	//char *myArray[] = { "e","a","b","c","d", };
	//num = sizeof(myArray) / sizeof(myArray[0]);
	//printf("数据的元素个数为%d\n", num);
	//printf("排序之前\n");
	////打印
	//for (i = 0; i < num; i++)
	//{
	//	//printf("%s ", myArray[i]);
	//	printf("%s ", *(myArray + i));
	//}
	////排序
	//char *tmp = NULL;
	//for (i = 0; i < num; i++)
	//{
	//	for (j = i+1; j < num; j++)
	//	{
	//		if (strcmp(myArray[i], myArray[j]) > 0)
	//		{
	//			tmp = myArray[i];
	//			myArray[i] = myArray[j];
	//			myArray[j] = tmp;
	//		}
	//	}
	//}
	//printf("排序之后：\n");
	//for (i = 0; i < num; i++)
	//{
	//	//printf("%s ", myArray[i]);
	//	printf("%s ", *(myArray + i));
	//}
	system("pause");
	return ;
}