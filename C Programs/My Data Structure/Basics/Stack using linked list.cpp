#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define p printf
#define s scanf
typedef struct node ll;
struct node{
	int data;
	struct node *next;
};
struct node *top=NULL;
void push(int num)
{
		ll *ptr;
		ptr=(ll *)malloc(sizeof(ll));
		ptr->data=num; ptr->next=top;
		top=ptr;
}
int pop(){
	int data;
	if(top==NULL){
	p("linked does\'nt exist\n");
	return -1;}
	else{
		ll *ptr=top;
		data=top->data;
		top=top->next;
		free(ptr);
	}
	return data;
}
void display()
{
	if(top==NULL)
	p("Linked list does\'nt exist\n");
	else{
		ll *ptr=top;
		while(ptr!=NULL){
			p("%d ",ptr->data);
			ptr=ptr->next;
		}
	}
}
int main()
{		
	int n,opt;
	printf("Enter 1 to push and 2 to pop from stack\n");
	scanf("%d",&opt);
	while(opt>0){
	if(opt==1) {
		printf("Enter value to push in stack\n");
		scanf("%d",&n);
		push(n); }
	else if(opt==2)
	    printf("The value popped from stack is %d\n",pop());
	else if(opt==3)
	    display();
	else
	    printf("Wrong Choice\n");
	printf("Enter 1 to push, 2 to pop from stack and 3 to display\n");
	scanf("%d",&opt);}
}
