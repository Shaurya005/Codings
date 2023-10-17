#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct node ll;
struct node{
	int data;
	struct node *next;
};
struct queue{
	ll *rear;
	ll *front;
};
struct queue *q;//Here we can also do by taking q only and then accessing by q.rear and q.front
struct queue* create()
{
//Unless we allocate memory to struct variable we can't use elements under it.
//We can only use to store address of similar struct variable.
q=(struct queue*)malloc(sizeof(struct queue));
q->front=NULL;
q->rear=NULL;
}
//create(q); Function calling can't be done outside the functions
struct queue *enque(struct queue *q){
	int num;
	printf("Enter number to add\n");
	scanf("%d",&num);
	ll *ptr=(ll *)malloc(sizeof(ll));
	ptr->data=num;
	if(q->front==NULL){
		q->front=q->rear=ptr;
		q->front->next=q->rear->next=NULL;
    }
	else{
		q->rear->next=ptr;
		q->rear=ptr;
		q->rear->next=NULL;
	}
return q;
}
struct queue *display(struct queue *q){
	ll *ptr=q->front;
	if(q->front==NULL)
		printf("Underflow\n");
		else
			while(ptr!=NULL){
				printf("%d\n",ptr->data);
				ptr=ptr->next;
			}
			return q;
}
struct queue *deque(struct queue *q){
	ll *ptr=q->front;
	if(ptr==NULL)
	printf("Empty Linked List\n");
	else{
		q->front=q->front->next;
		printf("Deleted item is %d",ptr->data);
		free(ptr);
	}
	return q;
}
int main()
{
	int opt;
	printf("Enter your option\n");
	scanf("%d",&opt);
	q=create();
	while(opt>=0){
		switch(opt){
			case 1:
				q=enque(q);
				break;
			case 2:
				q=display(q);
				break;
			case 3:
				q=deque(q);
				break;
			default:
				printf("\nWrong Option\n");
		}
		printf("Enter your next option\n");
		scanf("%d",&opt);
	}
}
