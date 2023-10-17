#include<stdio.h>
#include<math.h>
int main()
{
	int a[20]={2,11,20,22,23,29,31,33,34,36,53,56,59,61,67,74,83,91,93,98};
	printf("Enter number to search\n");
	int num,res;
	scanf("%d",&num);
	res=interpolation_search(a,20,num);
    if(res==-1)
    printf("Number Not Found in the array\n");
    else
    printf("The number is found at %d position",res);
}
//Interpolation Search also known as Extrapolation Search
int interpolation_search(int a[],int n,int num){
	int mid,low=0,high=n-1,;
	while(low<=high){
		mid=low+(high-low)*((num-a[low])/(a[high]-a[low]));
		if(num=a[mid])
		return mid;
		else if(val<a[mid])
		high=mid-1;
		else
		low=mid+1; 
	}
	return -1;
}
