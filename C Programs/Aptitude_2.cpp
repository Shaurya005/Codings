#include<stdio.h>
#include<stdlib.h>
#define var 3
int main(){
	char *p=NULL;
	printf("%s",p);//Passing NULL to printf is an undefined behavior 
	//Some pointer produce null while others Segmentation Fault. GCC and Dev C++ prints (null)
	//But if \n is there after %s then it prints nothing
	int x=1987;
	printf("%d",printf("%d",printf("\n%d",x)));//printf returns no. of characters printed on screen
	int j,i=10;
	static int a=5;
	extern int y;//We can't allocate value for a external variable dynamically
	if(y==i)
	printf("\nEqual");
	else
	printf("\nNotEqual");
	i=var+~4;//It means var-(4+1)
	printf("\n%d",i);
	//i=5;
	//int j=++i+++i+++i;
	//printf("%d %d",i,j);
	i=2;j=2;
	while(i+1?--i:j++)
	printf("\n%d",i);
	//char *cricket[var+~0]={"clarke","kallis"};
	//char* ptr=cricket;
	//printf("\n%c",*++ptr);
}
int y=30;//if i is written in place of 30 then [Error]

