#include<stdio.h>
#include<string.h>
int main()
{
	int a=85;float b=45.55;char c='A';
	double d=367.7574539,*ptr;
	ptr=&d;
	//Both are printing haxadecimal number
	printf("a: %p\n",a);
	printf("b: %p\n",b);
	printf("c: %p\n",c);
	printf("d: %p\n",*ptr);
	printf("Address of a: %p\n",&a);
	printf("Address of %b: %p\n",&b);//It prints characters after %if it is not format specifiers
	printf("Address of c: %p\n",&c);
	printf("Address of %%d: %p\n",ptr);//Similarly here too character after % i.e. %d get printed.
	printf("Address of a: %x\n",&a);
	printf("Address of b: %x\n",&b);
	printf("Address of c: %X\n",&c);
	printf("Address of d: %X\n",ptr);
}
