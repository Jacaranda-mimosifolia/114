#include<stdio.h>
#include<string.h>
#include<stdlib.h> 
//int scanf(const char *format...)
//ͨ�����̸������еı�����ֵ
//scanf���Խ���������������͵ĳ���ָ����,���سɹ����εĸ��� 
char *p;
char array[100];
char array1[]="hello world!";//�ַ������泣�� 

int main()
{
//scanf�ķ���ֵ��int���ͣ����ɹ����εĸ��� 
//	while(*(p=scanf("%s",array))!=NULL)
//	{
//		puts(array);
//		printf("%p\n\n",p);
//	}

//1.gets(array)��ȡ�û����룬���洢��array��
//2.p=gets(array)ָ��pָ��array���׵�ַ�����ַ������׵�ַ
//3.*p!=NULL���ַ�����һ���ַ���Ϊ���ַ�����ΪTure��ִ��ѭ������
//4.����Enter����'\0'�洢��array��Ϊ���ַ���False������ѭ�� 
	puts("The first prcess:");
	while(*(p=gets(array))!=NULL)
	{
		puts(array);
		printf("%p\n\n",p);//array���׵�ַ 
	}
	
	puts("The second prcess:");
	//void* malloc(size_t size); 
	p=(char*)malloc(sizeof(char)*strlen(array1));//�����ڴ����� 
	
	//��1��strcpy()
	//char *strcpy(char *destination,const char *source);
	strcpy(p,array1);
	printf("��1��strcpy(),%s\n%p\n",p,p);//p���׵�ַ����������������׵�ַ 
	
	//��2��gets()
	//char *gets(char *str);
	gets(p); 
	printf("��2��gets(),%s\n%p\n",p,p);
	
	//��3��scanf()
	//int scanf(const char *format);
	scanf("%s",p);
	printf("��3��scanf(),%s\n%p\n",p,p);
	free(p);
	p=NULL;
	return 0;
 } 
