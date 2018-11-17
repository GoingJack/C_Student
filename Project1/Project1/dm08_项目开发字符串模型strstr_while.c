#define  _CRT_SECURE_NO_WARNINGS 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void main88()
{
	int ncount = 0;
	char *p = "abcd1122333abcdeeeeabcd4444444";
	do {
		p = strstr(p, "abcd");
		if (p != NULL)
		{
			ncount++;
			p = p + strlen("abcd");
		}
		else
		{
			break;
		}
	} while (p != '\0');
	printf("hello...\n");
	system("pause");
	return ;
}
void main888()
{
	int ncount = 0;
	char *p = "abcd1122333abcdeeeeabcd4444444";
	while (p = strstr(p, "abcd"))
	{
		ncount++;
		p += strlen("abcd");
		if(*p=='\0')
			break;
	}
	printf("count的值为:%d\n", ncount);
	printf("hello...\n");
	system("pause");
	return;
}
int getCount(char *mystr/*in*/,char *buf/*in*/,int *ncount/*out*/)
{
	int count = 0;
	int ret = 0;
	char *p = mystr;//不要轻易改变形参的值
	if (p == NULL || buf == NULL || ncount == NULL)
	{
		ret = -1;
		printf("func getCount() error:%d(p == NULL || buf == NULL || ncount == NULL)\n", ret);
		return ret;
	}						    
	while (p = strstr(p, buf))
	{
		count++;
		p += strlen(buf);
		if (*p == '\0')
			break;
	}
	*ncount = count;
	return ret;
}
void main81()
{
	char *mystr = "abcd1122333abcdeeeeabcd4444444";
	char *sub = "abcd";
	int ncount=0;
	getCount(mystr, sub, &ncount);
	printf("出现的次数为%d\n", ncount);
	system("pause");
	return;
}