#define  _CRT_SECURE_NO_WARNINGS 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
typedef struct Teacher3
{
	char name[64];
	char *alisname;
	int age;
	int id;
}Teacher3;
//结构体数组3 输入老师年龄，排序
void printTeacher3(Teacher3 *array, int num)
{
	int i = 0;
	for (i = 0; i < num; i++)
	{
		printf("age:%d\n", array[i].age);
		printf("alisname:%s\n", array[i].alisname);
	}
}
void sortTeacher3(Teacher3 *array, int num)
{
	int i, j;
	Teacher3 tmp;
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
Teacher3 *createTeacher3(int num)
{
	int i = 0;
	Teacher3 *tmp = NULL;
	tmp = (Teacher3*)malloc(sizeof(Teacher3)*num);
	memset(tmp, 0, sizeof(Teacher3)*num);
	if (tmp == NULL)
	{
		return NULL;
	}
	for (i = 0; i < num; i++)
	{
		tmp[i].alisname = (char *)malloc(60);
	}
	return tmp;
}
void FreeTeacher3(Teacher3 *tmp,int num)
{
	int i;
	if (tmp == NULL)
	{
		return;
	}
	for (i = 0; i < num; i++)
	{
		if (tmp[i].alisname != NULL)
		{
			free(tmp[i].alisname);
		}
	}
	free(tmp);
}
void main333()
{
	int i = 0;
	Teacher3 *pArray = NULL;//在栈上分配内存
	pArray = createTeacher3(3);
	int num = 3;
	for (i = 0; i < num; i++)
	{
		printf("\nplease input age:");
		scanf("%d", &(pArray[i].age));
		printf("\nplease input alisname:");
		scanf("%s", (pArray[i].alisname));
	}
	//打印老师年龄
	for (i = 0; i < num; i++)
	{
		printf("age:%d \n", pArray[i].age);
		printf("alisname:%s\n", pArray[i].alisname);
	}
	sortTeacher3(pArray, num);
	printf("排序之后:\n");
	printTeacher3(pArray, num);
	FreeTeacher3(pArray,num);
	printf("hello...\n");
	system("pause");
	return;
}