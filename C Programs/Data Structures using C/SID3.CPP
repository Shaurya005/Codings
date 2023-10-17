#include<stdio.h>
#include<conio.h>
void bubble(int data[],int n);
void main()
{
 clrscr();
 int a[10],n,i;
 printf("Enter number of Elements ");
 scanf("%d",&n);
 printf("Enter Elemens of Array ");
 for(i=0;i<=n;i++)
 scanf("%d",&a[i]);
 bubble(a,n);
 printf("Sorted elements of Array is ",);
 for(i=0;i<n;i++)
 printf("\t%d\t",a[i]);
 getch();
 }
void bubble(int n,int [])
 int i,cp,j,temp;
