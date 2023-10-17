#include<stdio.h>
#include<stdlib.h>
#define s scanf
#define p printf
typedef struct node ll;
struct node{
	ll *prev;
	int data;
	ll *next; //ll*next is wrong but ll* next and ll *next is acceptable.
};
ll *L1=NULL,*L2=NULL;
ll *create(ll *head){
	int num;
	p("Enter first data\n");
	s("%d",&num);
	while(num!=-1){
		ll *node=(ll *)malloc(sizeof(ll));
		node->data=num;
		if(head==NULL){
			head=node;
			node->next=NULL;
			node->prev=NULL;
		}
		else{
			ll *ptr=head;
			while(ptr->next!=NULL){
				ptr=ptr->next;
			}
			ptr->next=node;
			node->next=NULL;
			node->prev=ptr;
		}
		p("Enter another data\n");
		s("%d",&num);
	}
	return head;
}
void display(struct node *head)
{
	if(head==NULL)
	p("Linked list does\'nt exist\n");
	else{
		ll *ptr=head;
		while(ptr!=NULL){
			p("%d ",ptr->data);
			ptr=ptr->next;
		}
	}
}
void setDifference(ll *L1,ll *L2){
   	ll *ptr1=L1,*ptr2=L2,*temp;
   	while(ptr2!=NULL&&ptr1!=NULL){
   		while((ptr1!=NULL)&&(ptr1->data<=ptr2->data)){
   			if(ptr1->data==ptr2->data){
   	if(ptr1==L1){
   		temp=L1;
   		L1=L1->next;
   		L1->prev=NULL;
   		ptr1=L1;//ptr1=ptr1->next;
   		free(temp);
	   }
	else if(ptr1->next==NULL){
		temp=ptr1;
	    ptr1->prev->next=ptr1->next;
	    ptr1=ptr1->next;
	    free(temp);
	}
	else{
	temp=ptr1;
	ptr1->prev->next=ptr1->next;
	ptr1->next->prev=ptr1->prev;
	ptr1=ptr1->next;
	free(temp);
	}
   }
   else
   ptr1=ptr1->next;
}
while((ptr2->next!=NULL)&&(ptr2->data==ptr2->next->data))
ptr2=ptr2->next;
ptr2=ptr2->next;
}
}
int main()
{
	int opt;
	scanf("%d",&opt);
	while(opt>0){
	p("\n *****MAIN MENU*****");
	p("\n 1: Create first list");
	p("\n 2: Display the first list");
	p("\n 3: Create Second list");
	p("\n 4: Display the second list\n\n");
	switch(opt){
		case 1:
			L1=create(L1);
			break;
		case 2:
			display(L1);
			break;
		case 3:
			L2=create(L2);
			break;
		case 4:
			display(L2);
			break;
		case 5:
			setDifference(L1,L2);
			break;
		default:
			printf("Wrong Choice\n");	
	}
	printf("Enter next option\n");
	scanf("%d",&opt);
}
}
