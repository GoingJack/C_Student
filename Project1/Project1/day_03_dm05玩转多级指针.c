#define  _CRT_SECURE_NO_WARNINGS 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int getMem5(char ***p2,int num)
{
	int i = 0;
	char **tmp = NULL;
	tmp = (char **)malloc(sizeof(char *)*num);
	if (tmp == NULL)
	{
		return -1;
	}
	for (i = 0; i < num; i++)
	{
		tmp[i] = (char *)malloc(sizeof(char) * 100);//char buf[100]
		sprintf(tmp[i], "%d%d%d", i + 1, i + 1, i + 1);
	}
	*p2 = tmp;
	return 0;
}
void getMen_Free(char ***p3, int num)
{
	char **tmp = NULL;
	if (p3 == NULL)
	{
		return;
	}
	tmp = *p3;
	for (int i = 0; i < num; i++)
	{
		free(tmp[i]);
	}
	free(tmp);
	*p3 = NULL;
}
void main5555()
{
	char **p2 = NULL;
	int num = 5;
	getMem5(&p2, num);
	for (int i = 0; i < num; i++)
	{
		printf("%s\n", p2[i]);
	}
	getMen_Free(&p2, num);
	printf("hello...\n");
	system("pause");
	return ;
}