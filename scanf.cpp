#include<stdio.h>
#include<string.h>
#include<stdlib.h> 
//int scanf(const char *format...)
//通过键盘给程序中的变量赋值
//scanf可以将参数传入各种类型的常量指针中,返回成功传参的个数 
char *p;
char array[100];
char array1[]="hello world!";//字符串字面常量 

int main()
{
//scanf的返回值是int类型，即成功传参的个数 
//	while(*(p=scanf("%s",array))!=NULL)
//	{
//		puts(array);
//		printf("%p\n\n",p);
//	}

//1.gets(array)获取用户输入，并存储在array中
//2.p=gets(array)指针p指向array的首地址，即字符串的首地址
//3.*p!=NULL，字符串第一个字符不为空字符，则为Ture，执行循环内容
//4.输入Enter，则将'\0'存储在array中为空字符，False，结束循环 
	puts("The first prcess:");
	while(*(p=gets(array))!=NULL)
	{
		puts(array);
		printf("%p\n\n",p);//array的首地址 
	}
	
	puts("The second prcess:");
	//void* malloc(size_t size); 
	p=(char*)malloc(sizeof(char)*strlen(array1));//开辟内存区域 
	
	//法1：strcpy()
	//char *strcpy(char *destination,const char *source);
	strcpy(p,array1);
	printf("法1：strcpy(),%s\n%p\n",p,p);//p的首地址，即所开辟区域的首地址 
	
	//法2：gets()
	//char *gets(char *str);
	gets(p); 
	printf("法2：gets(),%s\n%p\n",p,p);
	
	//法3：scanf()
	//int scanf(const char *format);
	scanf("%s",p);
	printf("法3：scanf(),%s\n%p\n",p,p);
	free(p);
	p=NULL;
	return 0;
 } 
