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
struct node *start1=NULL,*start2=NULL;
ll *merge(start1,start2){
	ll *ptr1=start1;
    ll *ptr2=start2;
    while(ptr1!=NULL&&ptr2!=NULL)
    {
    	
	}
}
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
struct node *sort_list(struct node *start){
	if(start==NULL)
	p("Linked list does\'nt exists");
	else{
		ll *ptr1,*ptr=start;int box;
		while(ptr->next!=NULL){
			ptr1=ptr->next;
			while(ptr1!=NULL){
				if(ptr1->data<ptr->data)
				{
					box=ptr1->data;
					ptr1->data=ptr->data;
					ptr->data=box;
				}
				ptr1=ptr1->next;
			}
			ptr=ptr->next;
		}
		p("***The List has been sorted***");
	}
	return start;
}
int main()
{
	int opt;
	do{
        p("\n\nEnter your option: ");
		s("%d",&opt);
		switch(opt)
		{	
			case 1: start1=create_ll(start1);
			        p("\n LINKED LIST CREATED");
			        break;
		    case 2: start2=create_ll(start2);
			        p("\n LINKED LIST CREATED");
			        break;
			case 3: display(start1);
		            break;
		    case 4: display(start2);
		            break;
		    case 5: start1=sort_list(start1);
			        break;
			case 6: start2=sort_list(start2);
			        break;
		    case 7: merged=merge(start1,start2);
			        break;        
			default:
				    p("\nWrong Option Chosen\n");
		} 
    }while(opt>0);
	getch();
	return 0;
}
