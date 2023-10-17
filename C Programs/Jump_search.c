#include<stdio.h>
#include<math.h>
int main()
{
	int a[20]={2,11,20,22,23,29,31,33,34,36,53,56,59,61,67,74,83,91,93,98};
	printf("Enter number to search\n");
	int num,res;
	scanf("%d",&num);
	res=jump_search(a,20,num);
    if(res==-1)
    printf("Number Not Found in the array\n");
    else
    printf("The number is found at %d position",res);
}
//Jump Search works in sorted array
int jump_search(int a[],int n,int num){
	int step=sqrt(n);int i=0;
	while(i<n){
		if(a[i]==num)
		return i;
		else if(a[i]<num)
		i+=step;
		else
		break;
	}
	int high=i,low=i-step;
	for(i=low;i<=high;i++)
	if(a[i]==num)
	return i;
	return -1;
}
