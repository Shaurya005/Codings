#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define maxstk 10
struct stack
{
int Item[maxstk];
int Top;
int pop;
 };
void push(struct stack *ps,int element)
{
 if(ps->Top==(maxstk-1))
 printf ("Overflow /n");
 else
 {
 ps->Top=ps->Top-1;
 ps->Item[++ps->Top]=element;
  }
 char ch;
 printf("/n Another Node/n");
 fflush(stdin);
 ch=getchar();
 while(ch!='n')
 ps->(Top-1)=ps->Top;
 Top= ps->ps->(ps->(Top-1));
 }
void pop(struct stack *ps)
{
 int del;
 if(ps->Top==-1)
 printf("/n Underflow/n");
 else
    {del=ps->Item[ps->Top--];
    printf("Deleted element is %d",del);
    }
 }
//void display()
//{
// struct stack *ps;
 //int i;
// printf ("Stack is:");
// for(i=Top;i>=0;i--)
// printf("%d",stack->ps[i]);//

void main()
{
 struct stack *s;
 s->Top=-1;
 push(s,7);
 pop(s);
 getch();
 }
