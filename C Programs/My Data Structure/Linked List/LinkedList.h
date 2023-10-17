#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>
#define p printf
#define s scanf

typedef struct node ll;
struct node{
	int data;
	struct node *next;
};

struct node *create_ll(struct node *start){
	p("Enter the first data ");
	int num;
	s("%d",&num);
	ll *node,*ptr;
	while(num!=-1)
	{
    node=(ll *)malloc(sizeof(ll));
    node->data=num;
	if(start==NULL)
	{
		start=node;
		node->next=NULL;
	}
	else{
		ptr=start;
		while(ptr->next!=NULL)
			ptr=ptr->next;
		ptr->next=node;
		node->next=NULL;
	}
	p("Enter the another data ");
	s("%d",&num);
}
return start;
}
void display(struct node *start)
{
	if(start==NULL)
	p("Linked list does\'nt exist\n");
	else{
		ll *ptr=start;
		while(ptr!=NULL){
			p("%d ",ptr->data);
			ptr=ptr->next;
		}
	}
}
