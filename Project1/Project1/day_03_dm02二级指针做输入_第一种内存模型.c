#define  _CRT_SECURE_NO_WARNINGS 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void BubbleSort(int *arr,int num)
{
	int i, j,tmp;
	printf("Ԫ�صĸ���Ϊ%d\n", num);
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
	//printf("���ݵ�Ԫ�ظ���Ϊ%d\n", num);
	//printf("����֮ǰ\n");
	////��ӡ
	//for (i = 0; i < num; i++)
	//{
	//	//printf("%s ", myArray[i]);
	//	printf("%s ", *(myArray + i));
	//}
	////����
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
	//printf("����֮��\n");
	//for (i = 0; i < num; i++)
	//{
	//	//printf("%s ", myArray[i]);
	//	printf("%s ", *(myArray + i));
	//}
	system("pause");
	return ;
}