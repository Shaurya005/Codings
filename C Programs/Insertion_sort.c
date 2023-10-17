#include<stdio.h>
int main(){
	int i,a[]={23,54,21,75,34,78,25,23,44,92,84,77,69,83,11,45,66,70};
    printf("Your sorted array: \n");
    insertion_sort(a,18);
    printf("\n");
	for(i=0;i<18;i++)
    printf("%d ",a[i]);
}
void insertion_sort(int a[],int n){
	int i,j,temp;
	for(i=1;i<n;i++){
		temp=a[i];
		j=i;
		while(j>0&&temp<=a[j-1]){
			a[j]=a[j-1];
			j--;
		}
		a[j]=temp;
	}
	for(i=0;i<18;i++)
    printf("%d ",a[i]);
}
