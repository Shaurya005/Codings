#include<stdio.h>
int main()
{
	int a[8]={12,21,25,29,31,37,46,67};
	int b[10]={3,15,19,25,29,43,47,55,61,65};
	int c[18],i,j,num;
	for(i=0;i<18;i++)
	if(i<8)
	c[i]=a[i];
	else
	c[i]=b[i-8];
	
	printf("Unsorted Merged array is ");
	for(i=0;i<18;i++)
    	printf("%d ",*(c+i));
for(i=0;i<17;i++)
	{
		num=c[i];
		for(j=i+1;j<18;j++)
		if(c[j]<=c[i])
		{
			c[i]=c[j];
			c[j]=num;
			num=c[i];
		}
	}
	printf("\n\nSorted Merged array is ");
	for(i=0;i<18;i++)
	printf("%d ",*(c+i));
}
