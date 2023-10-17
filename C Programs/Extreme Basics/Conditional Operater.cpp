#include<stdio.h>
int main()
{
	int i=4,j=-1,k=0,w,x,y,z;
	w=i||j||k;
	x=i&&j&&k;
	y=i||j&&k;//Priority of && is greater than ||
	z=i&&j||k;
	printf("w=%d x=%d y=%d z=%d\n",w,x,y,z);
	i=10,j=10;
	if(i&&j==10)//Priority of == is higher than &&
	printf("Have a good day\t");
	int a=5,b=6;
	(a==b?printf("%d\n",a):3);
	return 0;
}
