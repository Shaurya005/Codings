#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<process.h>
struct node{
            char name[20];
            node *next;
           };
class stack{
            node *top;
            public:
            stack();
            void push();
            void pop();
            void display();
            ~stack();
           };
stack::stack()
{
 top=NULL;
}
void stack::push()
{
 node *ptr=new node;
 gets(ptr->name);
 ptr->next=top;
 top=ptr;
}
void stack::pop()
{
 if(top==NULL)
 cout<<" Underflow!!! ";
 else
 {
  node *ptr=top;
  top=top->next;
  delete ptr;
 }
}
void stack::display()
{
 node *ptr=top;
 while(ptr!=NULL)
 {
  puts(ptr->name);
  cout<<"-> ";
  ptr=ptr->next;
 }
}
stack::~stack()
{
 node *ptr;
 while(top!=NULL)
 {
  ptr=top;
  top=top->next;
  delete ptr;
 }
}
void main()
{
 clrscr();
 stack s;
 char ch='y',ch1;
 while((ch=='y')||(ch=='Y'))
 {
  cout<<" Enter your choice(1-4)";
  cout<<"\n 1-Push \n 2-Pop \n 3-Display \n 4-Exit ";
  cin>>ch1;
  switch(ch1)
  {
   case '1': s.push();
             break;
   case '2': s.pop();
             break;
   case '3': s.display();
             break;
   case '4': exit(0);
   default : cout<<" Wrong choice ";
             exit(0);
  }
  cout<<" Want to enter more ???(y/n)";
  cin>>ch;
 }
 getch();
}







