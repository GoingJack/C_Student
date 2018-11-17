#define  _CRT_SECURE_NO_WARNINGS 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct Teacher
{
	char name[64];
	int age;
	char *pname2;
}Teacher;
void main()
{
	Teacher t1;
	Teacher t2;
	strcpy(t1.name, "name1");
	t1.pname2 = (char *)malloc(100);
	strcpy(t1.pname2, "name2");
	if (t1.name != NULL)
	{
		free(t1.pname2);
		t1.pname2 = NULL;
	}
	printf("hello...\n");
	system("pause");
	return ;
}