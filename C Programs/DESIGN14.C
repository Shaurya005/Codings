/* This program prints the pascal's triangle

		 1
	       1   1
	     1   2   1
	   1   3   3   1
	 1   4   6   4   1
		 .
		 .
		 .
		 .
		 upto n rows.
*/
#include<stdio.h>
#include<conio.h>
int valuef(int,int);
void main()
{
 int i, j, k, n, f, p;
 clrscr();
 printf(" Enter the number of rows : ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  for(j=i;j<=n+2;j++)
  printf("  ");
  for(k=0;k<=i-1;k++)
  {
   p=i-1;
   f=valuef(p,k);
   printf("%d   ",f);
  }
  printf("\n");
 }
 getch();
}
int valuef(int p, int k)
{
 int q, f, a=1, b=1, c=1;
 if(k==0)
 f=1;
 else
 {
  q=p-k;
  while(p>=1)
  {
   a*=p;
   --p;
  }
  while(k>=1)
  {
   b*=k;
   --k;
  }
  while(q>=1)
  {
   c*=q;
   --q;
  }
  f=a/(b*c);
 }
 return (f);
}