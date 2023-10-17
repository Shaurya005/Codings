#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct stack
{
int Info;
struct stack *next;
};

struct stack *Push_stack(struct stack *Top,int Item)
{
struct stack*n=(struct stack*)malloc(size of(struct stack));
if(n==NULL)
printf("Overflow");
else
{
n->Info=Item;
n->next =Top;
Top=n;
}
return(Top);
}
void main()
{
 struct stack *T;
 T=NULL;
 T=Push_stack(T,20);
 }