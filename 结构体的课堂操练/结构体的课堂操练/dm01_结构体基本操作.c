#define  _CRT_SECURE_NO_WARNINGS 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

//����һ���ṹ�������

//����һ����������  ���̶���С���ڴ����� ��û�з���
typedef struct Teacher
{
	char name[64];
	int age;
	int id;
}Teacher;
struct Student
{
	char name[64];
	int age;
}s1,s2;	//�������͵�ͬʱ �������
struct
{
	char name[64];
	int age;
}s3,s4;//�������� �������
//��ʼ�����������ַ���
//�������Ȼ���ʼ��
Teacher t3 = { "aaaa",31,01 };//1
struct Student2//2
{
	char name[64];
	int age;
}s5 = {"name1",21};
struct//3
{
	char name[64];
	int age;
}s6 = {"names",21};
void main111()
{
	//struct Teacher t1;//����C������ҷ����ڴ�
	Teacher t1;//�ü�typedef

	Teacher t2={ "aaa",31,01 };

	t1.age = 31;//.��Ѱַ����  
	//����age�����t1�������ƫ���� ===��������cpu�н���ô�в����ڴ�
	//ͨ��ָ��ķ�ʽ �����ڴ�ռ�
	{
		Teacher *p = NULL;
		p = &t2;
		printf("p->age:%d \n", p->age);
		printf("p->name:%s \n", p->name);
	}
	strcpy(t1.name, "t1name");
	printf("%s\n", t1.name);
	printf("hello...\n");
	system("pause");
	return ;
}
void copyTeacher(Teacher *to, Teacher from)
{
	*to = from;
}
void copyTeacher2(Teacher *to, Teacher *from)
{
	*to = *from;
}
void main11()
{
	Teacher t1 = { "aaaaa",32,02 };
	Teacher t2;
	Teacher t3;
	t2 = t1;//=�����±���������Ϊ
	//������Ϊ�����ṩ �򵥵�=�� ��ֵ���� ����Ҫ˳�ӡ���
	
	printf("t2.name:%s \n", t2.name);
	printf("t2.age:%d \n", t2.age);

	copyTeacher2(&t3, &t1);
	printf("copyTeacher() after:\n");
	printf("t3.name:%s \n", t3.name);
	printf("t3.age:%d \n", t3.age);
	system("pause");

}