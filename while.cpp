#include<stdio.h>
#include<string.h>
char *p;
char input[100];
int main()
{
	//1.gets(input)��ȡ�û����룬���洢��input��
	//2.ָ��pָ��input���׵�ַ���ַ������׵�ַ
	//3.*p!=NULL���ַ�����һ���ַ���Ϊ���ַ�����ΪTure��ִ��ѭ������
	//4.����Enter����'\0'�洢��input��Ϊ���ַ���False������ѭ�� 
	while(*(p=gets(input))!=NULL)
	{
		printf("gets(input)=%p\n",gets(input));
		printf("*p=%c\n",*p);
	}
	//170ҳ 
	return 0;
}
