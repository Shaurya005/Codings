#include<stdio.h>
void merge(int a[],int T[],int l,int m,int h);
void merge_sort(int a[],int T[],int l,int h);
int main()
{
	int i,a[]={23,54,21,75,34,78,25,23,44,92,84,77,69,83,11,45,66,70};
    printf("Your sorted array: \n");
    int t[20];
    merge_sort(a,t,0,17);
    for(i=0;i<18;i++)
    printf("%d ",a[i]);
}
void merge_sort(int a[],int T[],int l,int h)
{
	if(l<h)
	{
	int mid=(l+h)/2;
	merge_sort(a,T,l,mid);
	merge_sort(a,T,mid+1,h);
	merge(a,T,l,mid,h);
	}
}
void merge(int a[],int T[],int l,int m,int h){
	int i,RB,TP=0,N;int j=l;
	RB=m+1;
	N=h-l+1;
	while(l<=m&&RB<=h)
	{
		if(a[l]<=a[RB])
		T[TP++]=a[l++];
		else
		T[TP++]=a[RB++];
	}
	while(l<=m)
		T[TP++]=a[l++];
	while(RB<=h)
	T[TP++]=a[RB++];
	TP=0;
	while(j<=h)
	a[j++]=T[TP++];
}
