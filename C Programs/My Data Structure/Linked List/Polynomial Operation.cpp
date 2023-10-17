#include<stdio.h>
#include<stdlib.h>
#define p printf
#define s scanf
typedef struct poly ll;
struct poly{
	int n;
	int c;
	ll *next;
};
ll *start1=NULL;
ll *start2=NULL;
ll *start3=NULL;
ll *start4=NULL;
ll *create(ll *start){
    	int n,c;ll *ptr,*node;
    	p("Enter number and exponent respectively\n");
    	s("%d %d",&n,&c);
    	while(n!=-1){
    		node=(ll *)malloc(sizeof(ll));
    		node->n=n;
    		node->c=c;
    		if(start==NULL)
    		{
    			start=node;
    			start->next=NULL;
			}
			else{
				ptr=start;
				while(ptr->next!=NULL)
				ptr=ptr->next;
				ptr->next=node;
				node->next=NULL;
			}
            p("Enter another number and coefficient respectively\n");
            s("%d %d",&n,&c);
		}
		return start;
}
void display(ll *start)
{
	ll *ptr;
	if(start==NULL)
	p("Underflow\n");
	else{
		ptr=start;
		while(ptr!=NULL){
			p("%dx%d ",ptr->n,ptr->c);
			ptr=ptr->next;}
		}
}
ll *add_node(ll *start3,int n,int c){
	ll *node=(ll *)malloc(sizeof(ll));
	ll *ptr;
	node->n=n;
	node->c=c;
	node->next=NULL;
	if(start3==NULL)
		start3=node;
	else{
		ptr=start3;
		while(ptr->next!=NULL)
			ptr=ptr->next;
			ptr->next=node;
		}
		return start3;
}
//Works for polynomial expressed in decreasing order of magnitude
ll *add(ll *start1,ll *start2,ll *start3){
	ll *ptr1=start1,*ptr2=start2;
	while(ptr1!=NULL&&ptr2!=NULL){
		if(ptr1->c==ptr2->c){
		start3=add_node(start3,ptr1->n+ptr2->n,ptr1->c);
		ptr1=ptr1->next;
		ptr2=ptr2->next;	
		}
		else if(ptr1->c>ptr2->c)
		{
			start3=add_node(start3,ptr1->n,ptr1->c);
			ptr1=ptr1->next;
		}
		else if(ptr1->c<ptr2->c)
		{
			start3=add_node(start3,ptr2->n,ptr2->c);
			ptr2=ptr2->next;
		}
	}
	if(ptr1==NULL){
		while(ptr2!=NULL){
			start3=add_node(start3,ptr2->n,ptr2->c);
			ptr2=ptr2->next;
		}
	}
	if(ptr2==NULL){
		while(ptr1!=NULL){
			start3=add_node(start3,ptr1->n,ptr1->c);
			ptr1=ptr1->next;
		}
	}
	return start3;
}
int main(){
	int opt;
	p("Enter your option\n");
	s("%d",&opt);
	while(opt!=-1){
		switch(opt){
			case 1:
				start1=create(start1);
				break;
			case 2:
				display(start1);
				break;
			case 3:
				start2=create(start2);
				break;
			case 4:
				display(start2);
				break;
			case 5:
				start3=add(start1,start2,start3);
				break;
			case 6:
				display(start3);
			/**case 7:
				start4=sub(start1,start2,start4);
				break;
			case 8:
				start5=multiply(start1,start2,start5);
				break;**/
			default:
				p("\nInvalid Choice\n");
		       }
		    p("\nEnter next option\n");
			s("%d",&opt);	
		}
}
