#include<stdio.h>
#include<conio.h>
#define r 2
#define s 2
void main()
{
 int a[r][s],b[r][s],S[r][s],M[r][s],T[r][s],i,j,ch,k;
 clrscr();
 printf("Enter your first array");
 for(i=0;i<r;i++)
 {
 for(j=0;j<s;j++)
 scanf("%d",&a[i][j]);
 }
 printf("Enter your second array");
 for(i=0;i<r;i++)
 {
 for(j=0;j<s;j++)
 scanf("%d",&b[i][j]);
 }
 printf("Enter your choice\n");
 printf("1.for Addition \n 2.for Multiplication \n 3.for Transpose \n");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:
  for(i=0;i<r;i++)
  {
   for(j=0;j<s;j++)
   S[i][j]=a[i][j]+b[i][j];
   }
  printf("Addition of array\n");
  for(i=0;i<r;i++)
  {
   for(j=0;j<s;j++)
   printf(" %d\t",S[i][j]);
   printf("\n");
   }
 case 2:
  for(i=0;i<r;i++)
  {
   for(j=0;j<s;j++)
   {M[i][j]=0;
   for(k=0;k<r;k++)
   M[i][j]+=a[i][k]*b[k][j];
   }}
  printf("Multiple array is\n");
  for(i=0;i<r;i++)
  {
   for(j=0;j<s;j++)
   printf("%d\t",M[i][j]);
   printf("\n");
   }
 case 3:
  for(i=0;i<r;i++)
  {
   for(j=0;j<s;j++)
   T[r][s]=a[j][i];
   T[r][s]=b[j][i];
 }
 }
 getch();
}