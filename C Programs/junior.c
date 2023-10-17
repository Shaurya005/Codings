#include<stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	int b[10],num=n;
	while(num!=0){
		b[i]= num%2;
		num=num/2;
		i++;
	}
	printf("%d\n",i);
	num=i-1;
	while(i-->0)
	printf("%d ",b[i]);
	int k,max=0;int value;
	while(num>0){
		k=1;
		while(num>0&&(b[num]==b[num-1])){
		++k;
		num--;}
		if(k>max){
		max=k;
		value=b[num];}
		num--;
	}
	printf("\nMaximum no. of continuous 1's or 0's is %d and occurs %d times",value,max);
}
