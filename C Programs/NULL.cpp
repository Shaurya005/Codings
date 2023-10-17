#include<stdio.h>
int main(){
	int n;//Garbage Value
	char c[10]={NULL};//NULL is defined for c compiler 
	float f=NULL;
	printf("%d\n",n);
	int m=NULL;//No syntax error as NULL is defined for compiler
	printf("%d\n",m);
	printf("%s\n\n",c);
	printf("%f",f);
}
