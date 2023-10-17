#include<stdio.h>
int main()
{
	int a[]={12,15,23,36,39,42,46,49,52,54,58,63,69,73,78,84};
	int num,min=0,max=15,mid=7,k=0;
	printf("Enter the number to be searched\n");
	scanf("%d",&num);
	while(num!=a[mid])
	{
		if(max<min)
		{
			printf("Number not found");
			k=1;
			break;
		}
		if(a[mid]<num)
			min=mid+1;
		else
			max=mid-1;
		mid=(max+min)/2;
	}
	if(k==0)
	printf("Number %d is present at %dth position\n",num,mid);
}
