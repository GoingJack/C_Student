#define  _CRT_SECURE_NO_WARNINGS 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int searcheKeyTable(const char *table[], const int size, const char *key, int *pos)
{
	int rv = 0;
	int i = 0;
	int inum = 0;
	if (table == NULL || key == NULL || pos == NULL)
	{
		rv = -1;
		printf("func searchKeyTable:%d", rv);
		return rv;
	}

	inum = (sizeof(table) / sizeof(*table));
	for (i = 0; i < size; i++)
	{
		if (strcmp(key, table[i]) == 0)
		{
			*pos = i;
			//break;
			return rv;
		}
	}
	if (i == size)
	{
		*pos = -1;
	}
	return rv;
}
#define DIM(a) (sizeof(a)/sizeof(*a))
void main41()
{
	int inum = 0;
	int pos = 0;
	int a[10];
	int i = 0;
	//指针数组
	char * c_keyword[] = {
		"while",
		"case",
		"static",
		"do"
	};
	
	searcheKeyTable(c_keyword, DIM(c_keyword), "do", &pos);

	printf("pos:%d\n", pos);


	searcheKeyTable(c_keyword, DIM(c_keyword), "static", &pos);
	printf("pos:%d\n", pos);



	system("pause");
	return ;
}
int main411(int argc, char *argv[], char **env)
{
	int i = 0;

	printf("********** Begin argv **********\n");
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	printf("********** End argv **********\n");


	printf("\n");
	printf("\n");
	printf("\n");

	printf("********** Begin env **********\n");
	for (i = 0; env[i]!=NULL; i++)
	{
		printf("%s\n", env[i]);
	}

	printf("********** End env **********\n");

	system("pause");
}
void main()
{
	int inum = 0;
	int pos = 0;
	int a[10];
	int i = 0;
	//指针数组
	//具有自我自我结束能力
	// '\0' 0 NULL 都是数组的结束标志
	char * c_keyword[] = {
		"while",
		"case",
		"static",
		"do",
		'\0'

	};
	char * c_keyword2[] = {
	"while",
	"case",
	"static",
	"do",
	0

	};
	char * c_keyword3[] = {
	"while",
	"case",
	"static",
	"do",
	NULL
	};
	for (i = 0; c_keyword[i] != NULL; i++)
	{
		printf("%s ", c_keyword[i]);
	}
	printf("\n......\n");
	for (i = 0; c_keyword2[i] != NULL; i++)
	{
		printf("%s ", c_keyword2[i]);
	}
	printf("\n......\n");
	for (i = 0; c_keyword3[i] != NULL; i++)
	{
		printf("%s ", c_keyword3[i]);
	}
	system("pause");
}