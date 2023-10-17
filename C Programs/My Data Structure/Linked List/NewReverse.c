#include "LinkedList.h"
struct node *start=NULL;
//If written like ll *start;start=NULL;then [Error]start does not name a type is shown

struct node *reverse(struct node *start){
     ll *head1=NULL,*ptr=start,*temp;
     if(start == NULL || start->next == NULL)
     return start;
     //head1=start;
     while(ptr!=NULL){
     	temp=head1;
     	head1=ptr;
     	ptr=ptr->next;
     	head1->next=temp;
    }
	 return head1;
}

struct node *addCarry(struct node *start,int c){
	ll *ptr = start, *temp;
	int carry = c, sum;
	while (ptr!= NULL)
	{
		sum = carry + ptr->data;
		carry = (sum >= 10)? sum/10 : 0;

		// update sum if it is greater than 10
		sum = sum % 10;
		ptr->data = sum;
		temp = ptr;
		ptr = ptr->next;
	}

	// If some carry is still there, add a new node to result list.
	if (carry > 0){
		ll *node=(ll *)malloc(sizeof(ll));
		node->data=carry;node->next=NULL;
		temp->next=node;
	}
	return start;
}

int main(){
	start=create_ll(start);
	display(start);
	printf("\n Enter carry to add \n");
	int c;
	scanf("%d",&c);
	start=reverse(start);
	display(start);
	start=addCarry(start,c);
	start=reverse(start);
	printf("\n");
	display(start);
}
