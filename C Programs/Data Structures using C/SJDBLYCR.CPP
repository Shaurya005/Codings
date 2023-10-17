#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
 int info;
 struct node *previous;
 struct node *next;
}*p,*start,*end;
typedef struct node dbly;
void create()
{
 char ch;
 do
 {
  p=(dbly*)malloc(sizeof(dbly));
  printf("Enter Information");
  scanf("%d",&p->info);
  if(start!=NULL)
  {
  end->next=p;
  p->previous=end;
  end=p;
  }
  else
  {
  start=end=p;
  start->previous=NULL;
  }
  printf("Another node");
  fflush(stdin);
  ch=getchar();
  }
 while(ch!='n');
 end->next=NULL;

}
void main()
{
 start=end=NULL;
 create();
 getch();
}