#include<stdio.h>
#include<string.h>
char *p;
char input[100];
int main()
{
	//1.gets(input)获取用户输入，并存储在input中
	//2.指针p指向input的首地址即字符串的首地址
	//3.*p!=NULL，字符串第一个字符不为空字符，则为Ture，执行循环内容
	//4.输入Enter，则将'\0'存储在input中为空字符，False，结束循环 
	while(*(p=gets(input))!=NULL)
	{
		printf("gets(input)=%p\n",gets(input));
		printf("*p=%c\n",*p);
	}
	//170页 
	return 0;
}
