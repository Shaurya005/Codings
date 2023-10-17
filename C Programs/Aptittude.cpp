#include<stdio.h>
#include<string.h>
#define message "unions in \
C programmic language"
#define call(x) #x
int main()
{
	int i,j;
	float a=5.2;
	char *ptr;
	ptr=(char*)&a;
	printf("%d %u %u %s\n",strlen(ptr),&a,ptr,ptr);
	for(i=0;i<=3;i++)
	printf("%d ",*ptr++);//Garbage value each time
	printf("\n\n%s","c""question""here");//In c string "xy" is same as "x"y"
	char *str="C-Pointer";
	printf("\n%*.*s",10,7,str);//First * is for width and second * indicates how many characters to print of any string 
	i=-12;//00001100->11110011->11110100
	i>>=3;//After left shifting it becomes 11110 which value of -2
	printf("\nAfter left shift value of i is %d",i);
	printf("\n%d, %d",sizeof("str"),strlen("str"));
	i=1,2;
	j=(1,2);//comma operator will lead to right most one so it returns 2
	printf("\n%d %d",i,j);
	i=0;
	if(i==0){
		i=((5,(i=3)),i=1);
		printf("%d\n",i);
	}
	printf("%s\n",message);
	printf("%s",call(c/c++/c#/python));//here macro call will return string as it is
	if(printf("I m here "))//Returns true if it prints something
	printf("Because u r there");
	else
	printf("As u r here");
	if(scanf("%d%d",&i,&j)==2)//Returns the number of argument it is taking
	printf("\nOh yeah I am true");
	else
	printf("Oh no I am false");
	if(3==3==1)//It returns true
	printf("\nTrue");
	if(3==3==3||3==3==4)//It returns false
	printf("\nFalse");
}
