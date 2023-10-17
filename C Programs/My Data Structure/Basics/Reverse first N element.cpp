#include<stdio.h>
#include<stdlib.h>
#define p printf
#define s scanf
typedef struct node ll;
struct node{
	int data;
	ll *next;
};
ll *head=NULL;
ll *create(ll *head){
	int data;
	p("Enter all data for linked list\n");
	ll *ptr,*node=(ll *)malloc(sizeof(ll));
	s("%d",&data);
	node->data=data;
	while(data!=-1){
		if(head==NULL){
			head=node;
			head->next=NULL;
		}
		else{
		ptr=head;
		while(ptr->next!=NULL)
			ptr=ptr->next;
		ptr->next=node;
		node->next=NULL;
			node=(ll *)malloc(sizeof(ll));
			s("%d",&data);
			node->data=data;
		}	
	}
	return head;
}
void reverse(int N){
	ll *ptr=head;int i,count=0;
	if(head==NULL)
	{
		p("Empty Linked List\n");
		exit(111);
	}
	else{
		while(ptr!=NULL){
			count+=1;
			ptr=ptr->next;
		}
		p("Total no. of elements in list is %d\n",count);
		if(count>=N){
			int n[N];
			ptr=head;count=0;
			while(count<N){
				n[count]=ptr->data;
				ptr=ptr->next;
				count++;
			}
			ptr=head;
			count=N-1;
			while(count>=0){
				ptr->data=n[count];
				ptr=ptr->next;
				count-=1;
			}
			p("Linked List is reversed\n");
			}
		else
		printf("List size is lesser than N\n");
		}
	ptr=head;
	while(ptr!=NULL){
		p("%d\n",ptr->data);
		ptr=ptr->next;
	}
	}
int main(){
    head=create(head);  
	int N;
	p("Enter the value of N for reverse operation\n");
	s("%d",&N);
	reverse(N);
}
