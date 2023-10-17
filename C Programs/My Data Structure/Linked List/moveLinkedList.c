#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>
#define p printf
#define s scanf
struct node{
	int data;
	struct node *next;
};
struct node *start=NULL;//If written like ll *start;start=NULL;then [Error]start does not name a type is shown
typedef struct node ll;
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

struct node *display(struct node *start)
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
	return start;
}
/*
struct node *moveLinkedList(struct node *start, int x){
	if(start==NULL)
	    return NULL;
	
	struct node *temp,*preptr=start,*ptr=start;
	while(ptr->next!=NULL){
		if(ptr->data >= x && ptr->next->data < x){
			if(ptr==start){
				temp=ptr->next;
				ptr->next=ptr->next->next;
				temp->next=ptr;
				start=temp;
				ptr=start;
			}
			else{
				preptr->next=ptr->next;
				temp=ptr->next;
				ptr->next=ptr->next->next;
				temp->next=ptr;
				ptr=temp;
			}
		}
		preptr=ptr;
		ptr=ptr->next;
	}
	return start;
}
*/
struct node *moveLinkedList(struct node *start, int x){
	if(start==NULL)
	    return NULL;
	int n[100],i=0;
	struct node *temp,*preptr=start,*ptr=start;
	while(ptr!=NULL){
		n[i++]=ptr->data;
		ptr=ptr->next;
	}
	int num=i;i=0;
	while(i<num){
		if(n[i]<x)
		{
			while(i>0){
				if(n[i-1]>=x){
					temp=n[i-1];
					n[i-1]=n[i];
					n[i]=temp;
				}
			}
		}
	}

int main()
{
	start=create_ll(start);
	p("\n LINKED LIST CREATED");
	printf("\n");
	start=display(start);
	printf("\n");
	start=moveLinkedList(start, 4);
	start=display(start);
}
