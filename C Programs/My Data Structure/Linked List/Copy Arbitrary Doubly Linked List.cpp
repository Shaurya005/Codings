typedef struct node dll;
struct node{
	int data;
	dll *prev;
	dll *next;
};
dll *copy(dll *head){
    dll *ptr=head,*head1=NULL,*ptr1=head1;
	while(ptr!=NULL){
	    dll *node=(dll *)malloc(sizeof(dll));
	    node->data=ptr->data;
	    node->next=NULL;
	    if(ptr1==NULL)
		{
	    	head=node;
	    	ptr1=head;
		}
		else{
			ptr1->next=node;
			ptr1=node;
		}
		ptr=ptr->next;
	}
	ptr=head;ptr1=head1;
	int count=0;
		while(ptr!=NULL){
			count+=1;
			ptr=ptr->next;
		}
		int N=count;ptr=head;
		dll *n[N];count=0;
		while(count<N){
			n[count]=ptr;
			ptr=ptr->next;
			count++;	
		}
		ptr=head;dll *postptr;
		while(ptr!=NULL){
			postptr=ptr->next;
			ptr->next=ptr1;
			ptr=postptr;
			ptr1=ptr1->next;
		}
		ptr1=head1; m njbnv
		while(ptr1!=NULL){
			ptr1->prev=ptr1->prev->prev->next;
			ptr1=ptr1->next;
		}
		return head1;
}
