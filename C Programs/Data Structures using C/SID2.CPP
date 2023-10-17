#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 10
int stack_a[max];
int top=-1;
void push(int item);
int pop();
void display();
main()
{
 int choice,item;
 while(1)
 {
 printf("\n\t 1. for push\n");
 printf("2. for pop\n");
 printf("3. for exit");
 printf("Enter your choice");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:
  printf("enter the no to be push");
  scanf("%d",&item);
  push(item);
  break;
 case 2:
  item=pop();
  printf("pop item is =%d\n",item);
  break;
 default :
 exit();
 }
 }
}
int pop()
{
 int item;
 if(isempty())
 {
 printf("stack underflow\n");
 return();
 }
 top=top+1;
 stack_a[top];
 top=top=top-1;
 return item;
 }
void push(int item)
{
 if(isfull())
 {
 if(top==-1)
 return 1;
 else
 return 0;
 }
int isfull()
{
 if(top==max-1)
 printf("over flow\n");
 return();
 }
 top=top+1;
 stack_a[top]=item;
 }
