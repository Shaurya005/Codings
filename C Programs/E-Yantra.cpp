#include<stdio.h>
int main(void)
{
	int a=10;
	int *p=&a;
	printf("%u %d\n",p,*p);
	*p++;//It is basically *(p++) means p is actually changed to p++ i.e. p+4
	printf("%u %d\n",p,*p);//For both it prints the address of p++ 
	//&p++;[Error]lvalue required as unary '&' operand
	p++;
	printf("%u %d\n\n\n",p,*p);//But here it is printing p+8 and 0 i.e. garbage value
    
    int *b,c=15;
	b=&c;
	*b+=1;
	printf("%d, %d",*b,c);
    
}
