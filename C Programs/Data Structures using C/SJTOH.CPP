#include<stdio.h>
#include<conio.h>
#include<process.h>
void TOH(int n,char Beg,char Aux,char End)
{if(n==1)
 {printf("\n %c->%c ",Beg,End);
  return;}
 else TOH(n-1,Beg,End,Aux);
 printf("\n %c->%c ",Beg,End);
 TOH(n-1,Aux,Beg,End);
}

void main()
{char A,B,C;
 int n;
 clrscr();
 printf("Enter number of pegs");
 scanf("%d",&n);
 TOH(n,'A','B','C');
 getch();
}