#define  _CRT_SECURE_NO_WARNINGS 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
char **NewspitString3(const char *buf1, char c, int *count)
{
	char **buf2 = NULL;
	buf2 = (char **)malloc(sizeof(char *) * 10);
	if (buf2 == NULL)
	{
		return;
	}
	for (int i = 0; i < 10; i++)
	{
		buf2[i] = (char *)malloc(sizeof(char) * 30);
	}
	if (buf1 == NULL)
	{
		return NULL;
	}
	char *p = NULL;
	char *pTem = NULL;
	int tmpcount = 0;
	//初始化p ptem
	p = buf1;
	pTem = buf1;
	do
	{
		if ((p = strchr(p, c)) != NULL)
		{
			if (p - pTem > 0)
			{
				strncpy(buf2[tmpcount], pTem, p - pTem);
				buf2[tmpcount++][p - pTem] = '\0';
				p = pTem = p + 1;
			}
		}
		else
		{
			strcpy(buf2[tmpcount++], pTem);
			break;
		}
	} while (*p != '\0');
	//strcpy(buf2[tmpcount++], p);
	*count = tmpcount;
	return buf2;
}
char **NewspitString4(const char *buf1, char c, int *count)
{
	char *p = NULL;
	char *pTem = NULL;
	int tmpcount = 0;
	//初始化p ptem
	p = buf1;
	pTem = buf1;
	//求出精确的count 的值  行数的值。。。
	do
	{
		if ((p = strchr(p, c)) != NULL)
		{
			if (p - pTem > 0)
			{
				tmpcount++;
				p = pTem = p + 1;
			}
		}
		else
		{
			tmpcount++;
			break;
		}
	} while (*p != '\0');
	//strcpy(buf2[tmpcount++], p);
	*count = tmpcount;
	//分配内存空间 一维的
	char **buf2 = NULL;
	buf2 = (char **)malloc(sizeof(char *)*tmpcount);
	if (buf2 == NULL)
	{
		return NULL;
	}
	/////////////////////////////////////////////
	tmpcount = 0;
	p = buf1;
	pTem = buf1;
	do
	{
		if ((p = strchr(p, c)) != NULL)
		{
			if (p - pTem > 0)
			{
				int len = p - pTem + 1;
				buf2[tmpcount] = (char *)malloc(sizeof(char)*len);
				strncpy(buf2[tmpcount], pTem, p - pTem);
				buf2[tmpcount++][p - pTem] = '\0';
				p = pTem = p + 1;
			}
		}
		else
		{
			buf2[tmpcount] = (char *)malloc(sizeof(pTem) * sizeof(char)+1);
			strcpy(buf2[tmpcount++], pTem);
			break;
		}
	} while (*p != '\0');

	return buf2;
}
void FreeMem2(char **p, int num)
{
	int i = 0;
	if (p == NULL)
	{
		return;
	}
	for (i = 0; i < num; i++)
	{
		if (p[i] != NULL)
		{
			free(p[i]);
		}
	}
	if (p != NULL)
	{
		free(p);
	}
}
int NewspitString5(const char *buf1, char c, char ***buf3, int *count)
{
	int ret = 0;
	char *p = NULL;
	char *pTem = NULL;
	int tmpcount = 0;
	//初始化p ptem
	p = buf1;
	pTem = buf1;
	//求出精确的count 的值  行数的值。。。
	do
	{
		if ((p = strchr(p, c)) != NULL)
		{
			if (p - pTem > 0)
			{
				tmpcount++;
				p = pTem = p + 1;
			}
		}
		else
		{
			tmpcount++;
			break;
		}
	} while (*p != '\0');
	//strcpy(buf2[tmpcount++], p);
	*count = tmpcount;
	//分配内存空间 一维的
	char **buf2 = NULL;
	buf2 = (char **)malloc(sizeof(char *)*tmpcount);
	if (buf2 == NULL)
	{
		ret = -1;
		printf("func NewspitString5() err:%d ((char **)malloc(sizeof(char *)*tmpcount))", ret);
		goto END;
	}
	memset(buf2, 0, sizeof(char *)*tmpcount);
	/////////////////////////////////////////////
	tmpcount = 0;
	p = buf1;
	pTem = buf1;
	do
	{
		if ((p = strchr(p, c)) != NULL)
		{
			if (p - pTem > 0)
			{
				int len = p - pTem + 1;
				buf2[tmpcount] = (char *)malloc(sizeof(char)*len);
				if (buf2[tmpcount] == NULL)
				{
					ret = -1;
					printf("func NewspitString5() err:%d (buf2[tmpcount] = (char *)malloc(sizeof(char)*len)", ret);
					goto END;
				}
				strncpy(buf2[tmpcount], pTem, p - pTem);
				buf2[tmpcount++][p - pTem] = '\0';
				p = pTem = p + 1;
			}
		}
		else
		{
			buf2[tmpcount] = (char *)malloc(sizeof(pTem) * sizeof(char) + 1);
			if (buf2[tmpcount] == NULL)
			{
				ret = -1;
				printf("func NewspitString5() err:%d (char *)malloc(sizeof(pTem) * sizeof(char) + 1)", ret);
				goto END;
			}
			strcpy(buf2[tmpcount++], pTem);
			break;
		}
	} while (*p != '\0');

END:
	if (ret != 0)
	{
		FreeMem2(buf2, tmpcount);
	}
	else
	{
		*buf3 = buf2;
	}
	
	return ret;
}
char **getMem08()
{
	char **p = NULL;
	p = (char **)malloc(sizeof(char *) * 10);
	if (p == NULL)
	{
		return;
	}
	for (int i = 0; i < 10; i++)
	{
		p[i] = (char *)malloc(sizeof(char) * 30);
	}
	return p;
}
void main()
{
	int ret = 0, i = 0;
	//char *p1 = "abcdef,acccd,eeee,aaaaa,ssssss,";
	char *p1 = "aa,bb,";
	char cTem = ',';
	int nCount;

	//char myArray[10][30];

	//char **myArray = NewspitString4(p1,cTem,&nCount);

	char **myArray = NULL;
	ret=NewspitString5(p1, cTem, &myArray, &nCount);

	//myArray = (char **)malloc(sizeof(char *) * 10);
	//for (i = 0; i < 10; i++)
	//{
	//	myArray[i] = (char *)malloc(sizeof(char) * 30);
	//}

	//ret = NewspitString3(p1, cTem, myArray, &nCount);
	if (ret != 0)
	{
		printf("func spitString() err: %d \n", ret);
	}
	for (i = 0; i < nCount; i++)
	{
		printf("%s\n", myArray[i]);
	}

	//for (i = 0; i < nCount; i++)
	//{
	//	free(myArray[i]);
	//}
	//free(myArray);
	printf("hello...\n");
	system("pause");
	return;
}