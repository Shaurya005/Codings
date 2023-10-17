#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<process.h>
struct node{
            char name[20];
            node *next;
           };
class queue{
            node *front, *rear;
            public:
            queue();
            void push();
            void pop();
            void display();
            ~queue();
           };
queue::queue()
{
 front=rear=NULL;
}
void queue::push()
{
 node *ptr=new node;
 gets(ptr->name);
 if(rear==NULL)
 front=rear=ptr;
 else
 {
  rear->next=ptr;
  rear=ptr;
 }
}
void queue::pop()
{
 if(front==NULL)
 cout<<" Underflow!!! ";
 else
 {
  node *ptr=front;
  front=front->next;
  delete ptr;
 }
}
void queue::display()
{
 node *ptr=front;
 while(ptr!=NULL)
 {
  puts(ptr->name);
  cout<<"-> ";
  ptr=ptr->next;
 }
}
queue::~queue()
{
 node *ptr;
 while(front!=NULL)
 {
  ptr=front;
  front=front->next;
  delete ptr;
 }
}
void main()
{
 clrscr();
 queue q;
 char ch='y',ch1;
 while((ch=='y')||(ch=='Y'))
 {
  cout<<" Enter your choice(1-4)";
  cout<<"\n 1-Push \n 2-Pop \n 3-Display \n 4-Exit ";
  cin>>ch1;
  switch(ch1)
  {
   case '1': q.push();
             break;
   case '2': q.pop();
             break;
   case '3': q.display();
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
