#define  _CRT_SECURE_NO_WARNINGS 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int trimSpace(char *input, char *output)
{
	int ret = 0;
	if (input == NULL || output == NULL)
	{
		ret = -1;
		printf("func trimSpace() err:%d()input == NULL || output == NULL", ret);
		return ret;
	}
	char *p = input;
	p = strstr(input, " ");
	p = p + strlen(" ");
	char *lastp = strstr(p, " ");
	while (p != lastp)
	{
		*output = *p;
		p++;
		output++;
	}
	*output = '\0';
	return ret;

}
void main999()
{
	char str[] = " abcdef ";
	char outstr[128];
	trimSpace(str, outstr);
	printf("ȥ��ǰ:%s\n", str);
	printf("ȥ����:%s\n",outstr);
	printf("ȡ���������Ԫ�صĸ���:%d\n", strlen(outstr));


	system("pause");
	return ;
}