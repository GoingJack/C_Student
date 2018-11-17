#define  _CRT_SECURE_NO_WARNINGS 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int getCount(char *p, int *count)
{
	if (p == NULL || count == NULL)
	{
		printf("p == NULL || count == NULL");
		return -1;
	}
	int i = 0;
	int j = strlen(p) - 1;
	while (isspace(p[i]) && p[i] != '\0')
	{
		i++;
	}
	while (isspace(p[j]) && p[j] != '\0')
	{
		j--;
	}
	int AllCount = j - i + 1;
	*count = AllCount;
	return 0;
}
int trimSpace(char *p, char *newstr)
{
	if (p == NULL || newstr == NULL)
	{
		printf("p == NULL || count == NULL");
		return -1;
	}
	int i = 0;
	int j = strlen(p) - 1;
	while (isspace(p[i]) && p[i] != '\0')
	{
		i++;
	}
	while (isspace(p[j]) && p[j] != '\0')
	{
		j--;
	}
	int AllCount = j - i + 1;
	p = p + i;
	strncpy(newstr, p, AllCount);
	newstr[AllCount] = '\0';
	return 0;
}
int trimSpace1(char *p)
{
	if (p == NULL)
	{
		printf("p == NULL || count == NULL");
		return -1;
	}
	int i = 0;
	int j = strlen(p) - 1;
	while (isspace(p[i]) && p[i] != '\0')
	{
		i++;
	}
	while (isspace(p[j]) && p[j] != '\0')
	{
		j--;
	}
	int AllCount = j - i + 1;
	//p = p + i;
	strncpy(p, p+i, AllCount);
	p[AllCount] = '\0';
	return 0;
}
void main1()
{
	char *p = "  abcdefg  ";
	char buf[128] = "  abcdefg  ";
	char newstr[128];
	int count = 0;
	getCount(p, &count);
	printf("总个数为%d\n", count);
	//trimSpace(p, newstr);
	trimSpace1(buf);
	printf("去除过后的字符串为%s\n", buf);
	printf("hello...\n");
	system("pause");
	return ;
}