#include<stdio.h>
#include<string.h>
char *mystrcpy(char *destination,const char *source);
char array1[]="hello world!";
char array2[]="morning";
char *p="coffee";

int main()
{
	printf("%p,%p\n",array1,array2);
	printf(array1);
	mystrcpy(array1,array2);
	printf("\n%p,%p\n",array1,array2);
	printf("%p\n",mystrcpy(array1,array2));
	printf(array1);
	
	printf("\n%s\n",strcpy(array1,p));
	return 0;
}

char *mystrcpy(char *destination,const char *source)
{
	for(int i=0;i<strlen(source)+1;i++)
	{
		destination[i]=source[i];
		if(i==strlen(source)+1)
		{
			destination[i]='\0';
		}
	}
	return destination;
}
