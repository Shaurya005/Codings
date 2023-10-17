#include<stdio.h>
void search(int num,int *n,int min,int max)
{
	int mid;
	mid=(max+min)/2;
	if(*(n+mid)==num)
	printf("Number is at %dth position",mid);
	else if(max<min)
	printf("Number %d is not found",num);
	else if(*(n+mid)<num)
	search(num,n,mid+1,max);
	else if(*(n+mid)>num)
	search(num,n,min,mid-1);
}
int main()
{
	int n[]={12,15,23,24,25,27,29,32,36,39,45,67};
	int i,num;
	printf("Enter number to be searched\n");
	scanf("%d",&num);
	search(num,n,0,11);
	return 0;
}
