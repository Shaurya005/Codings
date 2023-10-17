#include<stdio.h>
#include<stdlib.h>
#define p printf
#define s scanf
typedef struct node ll;
struct node{
	int data;
	struct node *next;
};
struct node *start=NULL;

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
		node->next=start;
	}
	else{
		ptr=start;
		while(ptr->next!=start)
			ptr=ptr->next;
		ptr->next=node;
		node->next=start;
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
		while(ptr->next!=start){
			p("%d ",ptr->data);
			ptr=ptr->next;
		}
		p("%d ",ptr->data);
	}
	return start;
}
struct node *insert(struct node *start){
   	p("Enter the data and its position\n");
   	int num,pos;
   	s("%d %d",&num,&pos);
   	ll *temp,*node=(ll *)malloc(sizeof(ll));
   	node->data=num;
   	int count=1;
   	ll *ptr=start;
   	while(count<pos){
   		ptr=ptr->next;
   		count++;
	   }
	temp=ptr->next;
	ptr->next=node;
	node->next=temp;
	return start;
}

struct node *insert_end(struct node *start){
    if(start==NULL)
	p("Linked list does\'nt exist");
	else{
		int num;
		p("Enter the element to be inserted\n");
		s("%d",&num);
		ll *ptr,*temp;
		ptr=(ll *)malloc(sizeof(ll));
		ptr->data=num;
		temp=start;
		while(temp->next!=start)
			temp=temp->next;
		temp->next=ptr;
		ptr->next=start;
		}
    return start;		
}
int main()
{
	int opt;
	do{
		p("\n *****MAIN MENU*****");
		p("\n 1: Create a list");
		p("\n 2: Display the list");
		p("\n 3: Add a node at specified position");
		p("\n 4: Add a node at the end");
		p("\n\nEnter your option: ");
		s("%d",&opt);
		switch(opt)
		{
			case 1: start=create_ll(start);
			        p("\n LINKED LIST CREATED");
			        break;
		    case 2: start=display(start);
		            break;
		    case 3: start=insert(start);
		            break;
		    case 4: start=insert_end(start);
		            break;
		    default:
				    p("\nWrong Option Chosen\n");
		} 
    }while(opt>0);
	return 0;
}
