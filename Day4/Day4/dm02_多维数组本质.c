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

	//����һ��ָ�������ָ�����
	int(*pArray)[5];//���߱��������ҷ���8���ֽڵ��ڴ�
	pArray = a;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d ", pArray[i][j]);
		}
	}
	//a�Ƕ�ά����ĵ�ַ ������ǵ�0�е������ĵ�ַ
	//a+1������ǵڶ��е������ĵ�ַ
	//*(a+i)������һ��ָ��   ��i����Ԫ�صĵ�ַ
	//��ά��������ִ�����ָ��һά�����ָ�롣
	//*(a+i)+j ====>> &  a[i][j]
	//��ά���������� ����ָ��
	//*(*(a+i)+j) ==>> a[i][j]
	printf("hello...\n");
	system("pause");
	return ;
}