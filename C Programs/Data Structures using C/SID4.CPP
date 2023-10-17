#include<stdio.h>
#include<conio.h>
void add(a[r][c],b[r][c],m[r][c])
void main()
{
 int a[r][c],b[r][c],m[r][c],r,c,i,j;
 clrscr();
 printf("Enter the Value of row and column ");
 scanf("%d%d",&r,&c);
 printf("Enter the number of row and columm of Matrix1");
 for(i=0;i<r;i++)
 {for(j=0;j<c;j++)
  scanf("%d%d",&a[i][j]);}
 printf("Enter the number of row and column of Matrix2");
 for(i=0;i<r;i++)
 {for(j=0;j<c;j++)
  scanf("%d%d",&b[i][j]);}
  getch();
  }
void add(int a[r][c],b[r][c],m[r][c])
{int a[r][c],b[r][c],m[r][c];
 for(i=0;i<r;i++)
 {for(j=0;j<c;j++)
  m[i][j]=a[i][j]+b[i][j];}
  printf("Sum of Matrix1 and Matrix2 is : ");
 for(i=0;i<r;i++)
 {for(j=0;j<c;j++)
  printf("%d%d",m[i][j]);}
  printf("\n");
  printf("\t%d");
  }