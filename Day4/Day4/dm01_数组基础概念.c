#define  _CRT_SECURE_NO_WARNINGS 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void main11()
{
	int a[] = { 1,2 };
	int b[100] = {1, 3};
	int c[200] = { 0 };//�����ʱ����Ѿ�ȷ�������е�ֵΪ0
	memset(c, 0, sizeof(c));//��ʾ �����ڴ��
	//c��������Ԫ�صĵ�ַ c+1 ����Ϊ4���ֽ�  
	//&c����������ĸ��� &c+1 ����Ϊ800
	printf("hello...\n");
	system("pause");
	return ;
}
void main111()
{
	typedef int(MyArratType)[5];//������һ���������� ������������
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
//��������ָ������ĵ�һ�з���
void main1111()
{
	char *Myarray[] = { "111","222" };//ָ������
	//����ָ�� ��һ��ָ����ָ��һ������

	typedef int(MyArrayType)[5];
	int i = 0;

	MyArrayType MyArray;//�����Ͷ������

	MyArrayType *pArray;//����һ��ָ����� ���ָ����� ָ��һ������
	
	{
		//pArray = &Myarray; 
		int MyArray2[5];
		pArray = &MyArray2;
		for (i = 0; i < 5; i++)
		{
			//*((*pArray)+i) = i + 1;//���Ҳ���Ը�ֵ
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
//��������ָ��ĵڶ��ְ취
void main11111()
{
	//��������һ������ָ������
	typedef int(*PArrayType)[5];
	PArrayType pArray;//���߱��������ҷ���Ҫ��ָ�����
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
//ǰ���� ͨ�����Ͷ������ �Ƚ��鷳
//��������ָ������ĵ����ְ취
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