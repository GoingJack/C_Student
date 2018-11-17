#define  _CRT_SECURE_NO_WARNINGS 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void trimSpaceOtherCount(char *input,char *output)
{
	char *p = input;
	while (*p == ' ')
	{
		p += 1;
	}
	char *myposition = strstr(p, " ");
	while (p!=myposition)
	{
		*output = *p;
		p++;
		output++;
	}
	*output = '\0';
}
void ChangeInt(int *nInt)
{
	int a = 123;
	*nInt = a;

}
void main0999()
{
	char *p = "         abcdefgggg   ";
	char output[128];
	int count = 0;
	//trimSpace(pp, ppp);
	trimSpaceOtherCount(p,output);
	printf("%s\n除去空格的个数为:%d\n", output,strlen(output));
	

	int a = 1;
	ChangeInt(&a);
	printf("修改过后的Int的数字为%d\n", a);

	system("pause");
	return ;
}