#define  _CRT_SECURE_NO_WARNINGS 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int trimSpace03(char *p, char *newstr)
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
int getKeyByValue(char *keyvaluebuf, char *keybuf, char *valuebuf)
{
	char *p = NULL;
	int ret = 0;
	if (keyvaluebuf == NULL || keybuf == NULL || valuebuf == NULL)
	{
		ret = -1;
		printf("keyvaluebuf == NULL || keybuf == NULL || valuebuf == NULL err:%d", ret);
		return ret;
	}
	//1 ����key �Ƿ���ĸ����
	p = strstr(keyvaluebuf, keybuf);
	if (p == NULL)
	{
		printf("δ��ĸ�����ҵ���Ҫ���ҵ�key!\n");
		return -1;
	}
	//�ø���ָ��������µ�����һ�μ���������
	p = p + strlen(keybuf);
	//2 �ж��Ƿ��е��ں�
	p = strstr(p, "=");
	if (p == NULL)
	{
		printf("û�е��ں�!\n");
		return -1;
	}

	//3ȥ�����ںź���Ŀո�
	//�ø���ָ��������µ�����һ�μ���������
	p = p + strlen("=");
	trimSpace03(p, valuebuf);
	return ret;

}
void main3()
{
	char *keyvaluebuf = "Key1=  fsdjkfj   fsdkf= j    Key2    =       f sjkdjfklsd   ";
	char valuebuf[1024];
	getKeyByValue(keyvaluebuf, "Key2", valuebuf);
	printf("valuebuf:%s\n", valuebuf);
	printf("hello...\n");
	system("pause");




	char *p = { 0 }; char *p = NULL;
	return ;
}