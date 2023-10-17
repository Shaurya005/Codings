/* This program prints the output

   ABCDEFGFEDCBA
   ABCDEF FEDCBA
   ABCDE   EDCBA
   ABCD     DCBA
   ABC       CBA
   AB         BA
   A           A
   A           A
   AB         BA
   ABC       CBA
   ABCD     DCBA
   ABCDE   EDCBA
   ABCDEF FEDCBA
   ABCDEFGFEDCBA

*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int i, j, p, q=6;
 char ch;
 clrscr();
 printf("ABCDEFGFEDCBA\n");
 for(i=1;i<=6;i++)
 {
  ch='A';
  for(j=1;j<=q;j++)
  {
   printf("%c",ch);
   ++ch;
  }
  --ch;
  for(p=1;p<=2*i-1;p++)
  printf(" ");
  for(j=q;j>=1;j--)
  {
   printf("%c",ch);
   --ch;
  }
  --q;
  printf("\n");
 }
 q=11;

 for(i=1;i<=6;i++)
 {
  ch='A';
  for(j=1;j<=i;j++)
  {
   printf("%c",ch);
   ++ch;
  }
  --ch;
  for(p=1;p<=q;p++)
  printf(" ");
  for(j=1;j<=i;j++)
  {
   printf("%c",ch);
   --ch;
  }
  q=q-2;
  printf("\n");
 }
 printf("ABCDEFGFEDCBA");
 getch();
}


















