#include<stdio.h>
#include<conio.h>
#define MaxQue 10
int choice;

struct Queue
{int Item[MaxQue];
 int front,rear;
 }q;

void Insert(struct Queue*s,int ele)
{if((s->front==0&&s->rear==MaxQue-1)||(s->front==s->rear+1))
 printf("Overflow");
 else
 {if(s->front==1)
  s->front=s->rear=0;
  else if(s->rear==MaxQue-1)
  s->rear=0;
  else s->rear=s->rear+1;
  s->Item[s->rear]=ele;
 }
}
void Delete(struct Queue*s)
{int del;
 if(s->front==-1)
 printf("Underflow");
 else
 {del=s->Item[s->front];
  if(s->front==s->rear)
  s->front=s->rear=-1;
  else if(s->front==MaxQue-1)
  s->front=0;
  else s->front=s->front+1;
  printf("Deleted element is %d ",del);
 }
}
void Display(struct Queue*s)
{int i;
 if(s->front==1)
 printf("Nothing have to display");
 else
 {if(s->front>s->rear)
  {for(i=s->front;i<MaxQue;i++)
   printf("\t %d",s->Item[i]);
   for(i=0;i<=s->rear;i++)
   printf("\t %d",s->Item[i]);
  }
  else
  {for(i=s->front;i<=s->rear;i++)
   printf("\t %d",s->Item[i]);
  }
 }
}
void main()
{int choice,e=0;
 q.front=-1;
 q.rear=-1;
 clrscr();
 do
 {printf("\n Enter the choice ");
  printf("\n 1. Insertion");
  printf("\n 2. Deletion");
  printf("\n 3. Display");
  printf("\n 4. EXIT ");
  scanf("%d",&choice);
  switch(choice)
  { case 1:Insert(&q,3);
	   printf("\n Queue is after insertion ");
	   Display(&q);
	   break;
    case 2:Delete(&q);
	   printf("\n Queue is after deletion ");
	   Display(&q);
	   break;
    case 3:printf("Queue is");
	   Display(&q);
	   break;
    case 4:e=1;
    }}
  while(!e);
 getch();
}