#define  _CRT_SECURE_NO_WARNINGS 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void main71()
{
	char a[] = "i am student";
	char b[64];
	int i = 0;
	for (i = 0; *(a + i) != '\0'; i++)
	{
		*(b + i) = *(a + i);
	}
	b[i] = '\0';
	printf("%s", b);
	system("pause");
	return ;
}

//×Ö·û´®copyº¯ÊýÍÆÑÝ

void copy_str(char *from, char *to)
{
	for (; *from != '\0'; from++, to++)
	{
		*to = *from;
	}
	*to = '\0';
	return;
}

void main777()
{
	char *from = (char *)"abcdef";
	char buf2[100];
	copy_str(from, buf2);
	printf("buf2:%s", buf2);
	system("pause");
	return;
}