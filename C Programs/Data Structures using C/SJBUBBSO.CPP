#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,temp,n;
int arr[20];
clrscr();
printf("enter the number of element in the array");
scanf("%d",&n);
printf("enter the element of array");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1;j++)
{
if(arr[j]>arr[j+1])
{
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
printf("Sorted element in bubbles sort are\n");
for(i=0;i<n;i++)
{
printf("%d\t",arr[i]);
}
getch();
}