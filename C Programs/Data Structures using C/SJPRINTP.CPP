#include<stdio.h>
#include<conio.h>
struct poly
{
int coef;
int exp;
};
typedef struct poly p;
int input(p p1[10])
{
int i,l;
printf("enter lenght of polynomial");
scanf("%d",&l);
for(i=0;i<l;i++)
{
printf("enter %d term of polynomial",i);
scanf("%d%d",&p1[i].coef,&p1[i].exp);
}
return (l);
}

void print(p p1[],int l)
{
int i;
printf("\npolynomial is \n");
for(i=0;i<l-1;i++)
{
printf("%dx^%d+",p1[i].coef,p1[i].exp);
}
printf("%dx^%d",p1[i].coef,p1[i].exp);
}
void main()
{
p p1[10];
int l1;
l1=input(p1);
print(p1,l1);
getch();
}