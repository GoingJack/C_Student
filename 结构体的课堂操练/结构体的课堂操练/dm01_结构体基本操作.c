#define  _CRT_SECURE_NO_WARNINGS 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

//定义一个结构体的类型

//定义一个数据类型  。固定大小的内存块别名 还没有分配
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
}s1,s2;	//定义类型的同时 定义变量
struct
{
	char name[64];
	int age;
}s3,s4;//匿名类型 定义变量
//初始化变量的三种方法
//定义变量然后初始化
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
	//struct Teacher t1;//告诉C编译给我分配内存
	Teacher t1;//得加typedef

	Teacher t2={ "aaa",31,01 };

	t1.age = 31;//.是寻址操作  
	//计算age相对于t1大变量的偏移量 ===》》计算cpu中进行么有操作内存
	//通过指针的方式 操作内存空间
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
	t2 = t1;//=操作下编译器的行为
	//编译器为我们提供 简单的=号 赋值操作 我们要顺从。。
	
	printf("t2.name:%s \n", t2.name);
	printf("t2.age:%d \n", t2.age);

	copyTeacher2(&t3, &t1);
	printf("copyTeacher() after:\n");
	printf("t3.name:%s \n", t3.name);
	printf("t3.age:%d \n", t3.age);
	system("pause");

}