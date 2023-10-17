#include<stdio.h>
int main()
{
	printf("Enter no. of elements in array\n");
	int n,i,j,p,q;
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter rows and column of required array\n");
	scanf("%d%d",&p,&q);
	int m[p][q];
	for(i=0;i<p;i++)
	for(j=0;j<q;j++)
	m[i][j]=a[i*q+j];
	printf("Your 2-D array is \n\n");
	for(i=0;i<p;i++)
	{
	for(j=0;j<q;j++)
	printf("%d ",m[i][j]);
	printf("\n");
}
int z=1,b=3;
	printf("\n\n%d",++z + z++ + ++z);
}
