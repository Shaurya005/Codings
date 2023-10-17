/*
Given a singly linked list, rotate the linked list counter-clockwise by k nodes. Where k is a given positive integer. 
For example, if the given linked list is 10->20->30->40->50->60 and k is 4, 
the list should be modified to 50->60->10->20->30->40. Assume that k is smaller than the count of nodes in a linked list.
*/

#include "LinkedList.h"
struct node *start=NULL;//If written like ll *start;start=NULL;then [Error]start does not name a type is shown

struct node *rotateAntiClockwise(struct node *head,int k){
	struct node *ptr=head,*preptr,*ptr2=NULL;int i=0,temp;
	if(head==NULL || head->next==NULL)
	    return head;
	while(ptr->next!=NULL){
		if(i++==k){
		  ptr2=ptr;
		  preptr->next=NULL;}
		
		preptr=ptr;
		ptr=ptr->next;
		
		if(ptr->next==NULL){
			if(i==k){
			  ptr2=ptr;
			  preptr->next=NULL;}
			else if(i<k)
			  return head;
		}
	}
	ptr->next=head;
/*	
    This code will be used if we haven't used preptr in above while loop
	ptr=head;i=1;
	while(++i<=k) //Or while(ptr->next!=ptr2)
	ptr=ptr->next;
	ptr->next=NULL;
*/
	return ptr2;
}
struct node *rotateClockwise(struct node *head,int k){
	struct node *ptr=head,*preptr,*ptr2=NULL;int i=0,temp;
	if(head==NULL || head->next==NULL)
	    return head;
	while(ptr!=NULL){
	ptr=ptr->next;
	i++;}
	k=i-k;i=0;ptr=head;
	while(ptr->next!=NULL){
		if(i++==k){
		  ptr2=ptr;
		  preptr->next=NULL;}
		
		preptr=ptr;
		ptr=ptr->next;
		
		if(ptr->next==NULL){
			if(i==k){
			  ptr2=ptr;
			  preptr->next=NULL;}
			else if(i<k)
			  return head;
		}
	}
	ptr->next=head;
	return ptr2;
}

int main()
{
	start=create_ll(start);
	display(start);
	printf("\n Enter K \n");
	int k;
	scanf("%d",&k);
	start=rotateAntiClockwise(start,k);
	display(start);
	printf("\n");
	start=rotateClockwise(start,k);
	display(start);
}
