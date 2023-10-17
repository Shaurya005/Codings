/* This program prints the output

   123454321
   1234 4321
   123   321
   12     21
   1       1
*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int i, j, p, q=4;
 clrscr();
 printf("123454321\n");
 for(i=1;i<=4;i++)
 {
  for(j=1;j<=q;j++)
   printf("%d",j);
  for(p=1;p<=2*i-1;p++)
  printf(" ");
  for(j=q;j>=1;j--)
  printf("%d",j);
  --q;
  printf("\n");
 }
 getch();
}