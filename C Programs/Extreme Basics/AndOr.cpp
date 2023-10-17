#include <stdio.h>
int main()
{
	int code,flag;
	int i=4, j=-1, k=0,w,x,y,z;
	w=i||j||k;
	x=i&&j&&k;
	y=i||j&&k;
	z=i&&j||k;
	printf("w= %d x= %d y= %d z= %d\n%d %d  %d  %f %c\n",w,x,y,z,code);
	//most probably garbage value of float and char are 0.000000 and ? respectively
	if(code==0 && flag==0)
	printf("The eagle has landed\n");
	int a=100,b=10;
	if(a&&b==10)//Here it is working like a && (b==10),not like (a&&b)==10
	printf("Have a good day");
	printf("j>=65? %d : %c \n",j);
	a!=b?printf("%d\n",a):1;//Here it wouldn't print 1 obviously
}
