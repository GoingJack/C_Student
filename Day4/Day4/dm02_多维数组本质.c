#define  _CRT_SECURE_NO_WARNINGS 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void main2()
{
	int a[3][5], i = 0, j = 0;
	int tmp = 1;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			a[i][j] = tmp++;
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d ", a[i][j]);
		}
	}
	printf("a %d,a+1 %d", a, a + 1);
	printf("&a %d,&a+1 %d", &a, &a + 1);

	//定义一个指向数组的指针变量
	int(*pArray)[5];//告诉编译器给我分配8个字节的内存
	pArray = a;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d ", pArray[i][j]);
		}
	}
	//a是二维数组的地址 代表的是第0行的整个的地址
	//a+1代表的是第二行的整个的地址
	//*(a+i)代表是一级指针   第i行首元素的地址
	//二维数组的名字代表是指向一维数组的指针。
	//*(a+i)+j ====>> &  a[i][j]
	//多维数组名就是 数组指针
	//*(*(a+i)+j) ==>> a[i][j]
	printf("hello...\n");
	system("pause");
	return ;
}