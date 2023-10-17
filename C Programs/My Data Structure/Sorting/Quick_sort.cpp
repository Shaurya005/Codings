#include<stdio.h>
#include"myheader1.c"
void quick_sort(int a[],int l,int h);
int main()
{
	int i,a[]={23,54,21,75,8,10,89,1,63,48,11,45,66,70};
    printf("Your sorted array: \n");
    quick_sort(a,0,13);
    for(i=0;i<14;i++)
     printf("%d ",a[i]);
    // printf("%d",square(5)); square method was defined in file myheader1.c which is included here.
}

void swap(int a[],int i,int j){
	int temp=a[j];
	a[j]=a[i];
	a[i]=temp;
}

void quick_sort(int a[],int l,int h)
{
	if(l<h)
	{
		int temp,p,i,j;
		p=a[l];
		i=l; j=h;
		while(i<j)
		{
			while(a[i]<=p)
			i++;
			while(a[j]>p)
			j--;
			if(i<j)
			{	
			   swap(a,i,j);
			}
			else
			    break;
		}
			swap(a,l,j);
			quick_sort(a,l,j-1);
			quick_sort(a,j+1,h);
	}
}
