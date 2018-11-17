#define  _CRT_SECURE_NO_WARNINGS 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void changeStr(char *from,char *to)
{
	for (; *from != '\0'; from++,to++)
	{
		*to = *from;
	}
	*to = '\0';
	//return;
}
void mainzz()
{
	/*char *p = NULL;
	p = (char *)malloc(100);
	sprintf(p, "%s", "123");
	printf("\n%s\n", p);
	if (p != NULL)
	{
		free(p);
		p = NULL;
	}
	if (p != NULL)
	{
		free(p);
	}*/
	char from[]="aaabbbcccdddeefff";
	char to[128];
	changeStr(from, to);

	printf("%s", to);
	




	printf("hello...\n");
	system("pause");
	//return ;
}