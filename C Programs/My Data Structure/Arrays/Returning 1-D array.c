#include<stdio.h>
int *array()
{
int n[10]={1,2,3,4,5,6,7,8,9,10};
return n;//[Warning] function returns address of local variable [-Wreturn-local-addr]
//In cpp it would show 
}
int main()
{
int i,*a;
a=array();
for(i=0;i<10;i++)
printf("%d\n",a[i]);
//Here some values are printed correctly but some are wrong bcoz they are being deleted from stack as function closes.
}
