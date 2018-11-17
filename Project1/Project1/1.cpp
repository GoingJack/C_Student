#define  _CRT_SECURE_NO_WARNINGS 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void main1()
{
	char buf5[128] = "abcdef";
	char *p;
	p = buf5;
	int i;
	//buf5
	for (i = 0; i < strlen(buf5); i++)
	{
		printf("%c ", *(buf5 + i));
	}
	printf("\n");

	//p
	for (i = 0; i < strlen(buf5); i++)
	{
		printf("%c ", *(p + i));
	}
	printf("hello...\n");
	system("pause");
	return ;
}