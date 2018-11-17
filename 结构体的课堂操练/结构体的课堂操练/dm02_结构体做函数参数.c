#define  _CRT_SECURE_NO_WARNINGS 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct Teacher
{
	char name[64];
	int age;
	int id;
}Teacher;
//结构体数组3 输入老师年龄，排序
void printTeacher(Teacher *array, int num)
{
	int i = 0;
	for (i = 0; i < num; i++)
	{
		printf("age:%d\n", array[i].age);
	}
}
void sortTeacher(Teacher *array, int num)
{
	int i, j;
	Teacher tmp;
	for (i = 0; i < 3; i++)
	{
		for (j = i + 1; j < 3; j++)
		{
			if (array[i].age > array[j].age)
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
			}
		}
	}
}

void main21()
{
	int i = 0;
	Teacher Array[3];//在栈上分配内存
	int num = 3;
	for (i = 0; i < num; i++)
	{
		printf("\nplease input age:");
		scanf("%d", &(Array[i].age));
	}
	//打印老师年龄
	for (i = 0; i < num; i++)
	{
		printf("age:%d \n", Array[i].age);
	}
	sortTeacher(Array, num);
	printf("排序之后:\n");
	printTeacher(Array, num);
	printf("hello...\n");
	system("pause");
	return ;
}
Teacher *createTeacher(int num)
{
	Teacher *tmp = NULL;
	tmp = (Teacher*)malloc(sizeof(Teacher)*num);
	if (tmp == NULL)
	{
		return NULL;
	}
	return tmp;
}
void FreeTeacher(Teacher *tmp)
{
	if (tmp == NULL)
	{
		return;
	}
	free(tmp);
}
void main2222()
{
	int i = 0;
	Teacher *pArray=NULL;//在栈上分配内存
	pArray = createTeacher(3);
	int num = 3;
	for (i = 0; i < num; i++)
	{
		printf("\nplease input age:");
		scanf("%d", &(pArray[i].age));
	}
	//打印老师年龄
	for (i = 0; i < num; i++)
	{
		printf("age:%d \n", pArray[i].age);
	}
	sortTeacher(pArray, num);
	printf("排序之后:\n");
	printTeacher(pArray, num);
	FreeTeacher(pArray);
	printf("hello...\n");
	system("pause");
	return;
}