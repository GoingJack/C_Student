#define  _CRT_SECURE_NO_WARNINGS 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char g_buf[1000];
int inverse(char *buf)
{
	if (buf==NULL)
	{
		printf("buf==NULL");
		return -1;
	}
	int length = strlen(buf);
	char *p1 = buf;
	char *p2 = buf + length - 1;

	while (p1 < p2)
	{
		char c = *p1;
		*p1 = *p2;
		*p2 = c;
		p1++;
		p2--;
	}
	return 0;
}
int inverse02(char *p)
{
	if (p == NULL)
	{
		return -1;
	}
	if (*p == '\0')
	{
		return 0;
	}
	inverse02(p + 1);
	printf("%c", *p);

}
int inverse03(char *p)
{
	if (p == NULL)
	{
		return;
	}
	if (*p == '\0')
	{
		return;
	}
	inverse03(p + 1);
	//printf("%c", *p);
	strncat(g_buf, p, 1);

}
int inverse04(char *p,char *mybuf)
{
	if (p == NULL||mybuf==NULL)
	{
		return;
	}
	if (*p == '\0')
	{
		return;
	}
	inverse04(p + 1,mybuf);
	//printf("%c", *p);
	strncat(mybuf, p, 1);

}
void main2()
{
	char buf[] = "1234567";
	//inverse(buf);
	//printf("buf:%s\n", buf);

	//inverse02(buf);
	//printf("hello...\n");
	
	//memset(g_buf, 0, sizeof(g_buf));
	//inverse03(buf);
	//printf("%s\n", g_buf);

	char mybuf[1024] = { 0 };
	inverse04(buf, mybuf);
	printf("%s\n", mybuf);
	system("pause");
	return ;
}