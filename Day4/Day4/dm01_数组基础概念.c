#define  _CRT_SECURE_NO_WARNINGS 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void main11()
{
	int a[] = { 1,2 };
	int b[100] = {1, 3};
	int c[200] = { 0 };//编译的时候就已经确定了所有的值为0
	memset(c, 0, sizeof(c));//显示 重置内存块
	//c是数组首元素的地址 c+1 步长为4个字节  
	//&c是整个数组的个数 &c+1 步长为800
	printf("hello...\n");
	system("pause");
	return ;
}
void main111()
{
	typedef int(MyArratType)[5];//定义了一个数据类型 数组数据类型
	MyArratType myArray;
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		myArray[i] = i + 1;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d\n", myArray[i]);
	}
	printf("MyArray:%d MyArray+1:%d \n", myArray, myArray + 1);
	printf("&MyArray:%d &MyArray+1:%d \n", &myArray, &myArray + 1);
	printf("hello...\n");
	system("pause");
	return;
}
//定义数组指针变量的第一中方法
void main1111()
{
	char *Myarray[] = { "111","222" };//指针数组
	//数组指针 用一个指针来指向一个数组

	typedef int(MyArrayType)[5];
	int i = 0;

	MyArrayType MyArray;//用类型定义变量

	MyArrayType *pArray;//定义一个指针变量 这个指针变量 指向一个数组
	
	{
		//pArray = &Myarray; 
		int MyArray2[5];
		pArray = &MyArray2;
		for (i = 0; i < 5; i++)
		{
			//*((*pArray)+i) = i + 1;//这个也可以赋值
			(*pArray)[i] = i + 1;
		}
		for (i = 0; i < 5; i++)
		{
			printf("%d ", (*pArray)[i]);
		}
	}
	system("pause");
	return;
}
//定义数组指针的第二种办法
void main11111()
{
	//定义声明一个数组指针类型
	typedef int(*PArrayType)[5];
	PArrayType pArray;//告诉编译器给我分配要给指针变量
	int c[5];
	pArray = &c;
	{
		for (int i = 0; i < 5; i++)
		{
			(*pArray)[i] = i + 1;
		}
		for (int i = 0; i < 5; i++)
		{
			printf("%d ", (*pArray)[i]);
		}
	}
	system("pause");
}
//前俩中 通过类型定义变量 比较麻烦
//定义数组指针变量的第三种办法
void main12()
{
	int (*pArray)[5];
	int c[5];
	pArray = &c;
	{
		for (int i = 0; i < 5; i++)
		{
			(*pArray)[i] = i + 1;
		}
		for (int i = 0; i < 5; i++)
		{
			printf("%d ", (*pArray)[i]);
		}
	}
	system("pause");
	return;
}