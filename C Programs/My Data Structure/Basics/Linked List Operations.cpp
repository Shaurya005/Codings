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
struct node *insert_beg(struct node *start)
{
	if(start==NULL)
	p("Linked list does\'nt exist");
	else{
		int num;
		p("Enter the element to be inserted\n");
		s("%d",&num);//If here & were not there it would change value in n from garbage
		ll *ptr;
		ptr=(ll *)malloc(sizeof(ll));
		ptr->data=num; ptr->next=start;
		start=ptr;
	}
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
		while(temp->next!=NULL)
			temp=temp->next;
		temp->next=ptr;
		ptr->next=NULL;
		}
    return start;		
}

struct node *insert_before(struct node *start){
	ll *node,*ptr,*ptr1;
	int num,val;
	p("\nEnter the data\n");
	s("%d",&num);
	p("\nEnter the value before which data is to be printed\n");
	s("%d",&val);
	node=(ll *)malloc(sizeof(ll));
	node->data=num;
	ptr=start;
	while(ptr->data!=val){
		ptr1=ptr;
		ptr=ptr->next;
	}
	node->next=ptr;
	ptr1->next=node;
	return start;
}

struct node *insert_after(struct node *start){
	ll *node,*ptr,*ptr1;
	int num,val;
	p("\nEnter the data\n");
	s("%d",&num);
	p("\nEnter the value after which data is to be printed\n");
	s("%d",&val);
	node=(ll *)malloc(sizeof(ll));
	node->data=num;
	ptr=ptr1=start;
	while(ptr1->data!=val){
		ptr1=ptr;
		ptr=ptr->next;
	}
	node->next=ptr;
	ptr1->next=node;
	return start;
}

struct node *delete_beg(ll *start){
	if(start==NULL)
	p("linked does\'nt exist\n");
	else{
		ll *ptr=start;
		start=start->next;
		free(ptr);
	}
	return start;
}

struct node *delete_end(struct node *start){
	ll *ptr,*ptr1;
	if(start==NULL)
	p("Linked list does\'nt exists");
	else{
		ptr=start;
		while(ptr->next!=NULL){
		ptr1=ptr;
		ptr=ptr->next;}
		ptr1->next==NULL;
		free(ptr);
	}
	return start;
}

struct node *delete_before(struct node *start){
	if(start==NULL)
	p("Linked list does\'nt exists");
	else{
		ll *ptr,*ptr1;
		ptr=start;
		p("Enter the value before which data is to deleted\n");
		int val;
		s("%d",&val);
		while(ptr->next->data!=val){
			ptr1=ptr;
			ptr=ptr->next;}
		ptr1->next=ptr->next;
		free(ptr);
	}
		return start;
}

struct node *delete_after(struct node *start){
	if(start==NULL)
	p("Linked list does\'nt exists");
	else{
		ll *ptr,*ptr1;
		ptr=ptr1=start;
		p("Enter the value after which data is to deleted\n");
		int val;
		s("%d",&val);
		while(ptr1->data!=val){
			ptr1=ptr;
			ptr=ptr->next;}
		ptr1->next=ptr->next;
		free(ptr);
	}
	return start;
}

struct node *delete_list(struct node *start){
	ll *ptr;
	if(start==NULL)
	p("\nLinked list is deleted\n");
	else{
		ptr=start;
		//If ptr were declared here then at return statement it would show ptr isn't delared in this scope bcoz when if case is executed
		while(ptr!=NULL)
        ptr=delete_beg(ptr);
        p("***LINKED LIST DELETED SUCCESSFULLY***");
	}
	return ptr;
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
		p("\n *****MAIN MENU*****");
		p("\n 1: Create a list");
		p("\n 2: Display the list");
		p("\n 3: Add a node at the beginning");
		p("\n 4: Add a node at the end");
		p("\n 5: Add a node before a given node");
		p("\n 6: Add a node after a given node");
		p("\n 7: Delete a node from the begining");
		p("\n 8: Delete a node from the end");
		p("\n 9: Delete a node before a given node");
		p("\n 10: Delete a node after a given node");
		p("\n 11: Delete the entire list");
		p("\n 12: Sort the entire list");
		p("\n 13: EXIT");
		p("\n\nEnter your option: ");
		s("%d",&opt);
		switch(opt)
		{
			case 1: start=create_ll(start);
			        p("\n LINKED LIST CREATED");
			        break;
		    case 2: start=display(start);
		            break;
		    case 3: start=insert_beg(start);
		            break;
		    case 4: start=insert_end(start);
		            break;
		    case 5: start=insert_before(start);
		            break;
		    case 6: start=insert_after(start);
		            break;
		    case 7: start=delete_beg(start);
		            break;
		    case 8: start=delete_end(start);//Error
		            break;
		    case 9: start=delete_before(start);
		            break;
		    case 10: start=delete_after(start);//Error
		            break;
		    case 11: start=delete_list(start);
		            p("\nLINKED LIST DELETED");
					break;
			case 12: start=sort_list(start);
			        break;
			default:
				    p("\nWrong Option Chosen\n");
		} 
    }while(opt!=13);
	getch();
	return 0;
}
