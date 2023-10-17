#include<stdio.h>

void printArray(int *n, int l){
	int i;
	for(i=0;i<l;i++)
	 printf("%d ",n[i]);
	printf("\n");
}
void InsertionSort(int *n, int l){
	int key,i,j;
	for(i=1;i<l;i++){
		key=n[i];
		j=i-1;
		while(j>=0 && n[j]>key){
			n[j+1]=n[j]; j--;
		}
		n[j+1]=key;
	}
}
int main(){
	int n[]={1,5,3,9,6,2};
	printArray(n,6);
	InsertionSort(n,6);
	printArray(n,6);
}
