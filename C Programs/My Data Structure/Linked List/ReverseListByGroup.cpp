#include"LinkedList.h"

struct node *start=NULL;//If written like ll *start;start=NULL;then [Error]start does not name a type is shown
struct node *reverse2(struct node *head, int k)
    { 
        if(head==NULL||head->next==NULL)
        return head;
        int i=0;
        struct node *ptr=head,*temp1,*current_tail=head,*tail,*head1=NULL,*rev;
        while(ptr!=NULL){
            if(i%(2*k)==0)
              tail=current_tail;
            if(i%k==0)
			  current_tail=ptr;
            
			temp1=head1;
            head1=ptr;
            ptr=ptr->next;
            head1->next=temp1;
            i++;          
			if(i==k){
              rev=head1;
              head1=NULL;
			  tail->next=ptr;} 
            if( i%(2*k)==0 || ptr==NULL){
              tail->next=head1;
              head1=NULL;
            }
		}
		return rev;
}
    
int main()
{
	start=create_ll(start);
	display(start);
	printf("\n Enter K \n");
	int k;
	scanf("%d",&k);
	start=reverse2(start,k);
	display(start);
}
