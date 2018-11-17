#define  _CRT_SECURE_NO_WARNINGS 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void maintest()
{
	char str[] = "This is a simple string";
	char *str1 = str;
	
	char * pch;
	pch = strstr(str, " ");
	//strncpy(pch, "sample", 5);
	//puts(pch);
	char *tmp=NULL;
	int ncount = 0;
	char buf2[10][30] = {0};
	while ((tmp = strstr(str1, " ")) != NULL)
	{
		char buftmp[128] = {0};
		int i = 0;
		while (str1 != tmp)
		{
			*(buftmp+i++) = *str1;
			str1++;
		}
		buftmp[i] = '\0';
		strcpy(buf2[ncount++], buftmp);
		str1 += strlen(" ");
	}
	strcpy(buf2[ncount], str1);
	for (int i = 0; i < 5; i++)
	{
		printf("%s\n", buf2[i]);
	}
	printf("hello...\n");
	system("pause");
	return ;
}