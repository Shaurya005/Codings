#include<stdio.h>
int main()
{
	int p,i,j,sum1=0,sum2=0;
	int a[3][3];
	printf("Enter the whole matrix\n");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
	scanf("%d",&a[i][j]);
	if(i==j)
	sum1=sum1+a[i][j];
	if(i+j==2)
	sum2=sum2+a[i][j];}
	printf("Sum of diagonal elements from left to right is %d\n",sum1);
	printf("Sum of diagonal elements from left to right is %d",sum2);
}
