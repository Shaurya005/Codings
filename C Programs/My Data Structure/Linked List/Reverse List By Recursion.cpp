#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define p printf
#define s scanf
typedef struct node ll;
struct node{
	int data;
	struct node *next;
};
struct node *start=NULL;//If written like ll *start;start=NULL;then [Error]start does not name a type is shown
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
	{   start=node;
		node->next=NULL;}
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
void reverse(ll *p,ll *q){
	if(p!=NULL){
		reverse(p->next,p);
		p->next=q;
	}
	else
	start=q;
}
int main()
{
	int opt;
	do{
		p("\n *****MAIN MENU*****");
		p("\n 1: Create a list");
		p("\n 2: Display the list");
		p("\n\nEnter your option: ");
		s("%d",&opt);
		switch(opt)
		{
			case 1: start=create_ll(start);
			        p("\n LINKED LIST CREATED");
			        break;
		    case 2: start=display(start);
		            break;
		    case 3: reverse(start,NULL);
		            break;
		    default:
		    	    printf("Wrong Option\n");
		 }
	}
    while(opt>=0);
	return 0;
}
