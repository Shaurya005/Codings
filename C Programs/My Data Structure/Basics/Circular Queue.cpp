#include<stdio.h>
#include<stdlib.h>
int q[10];
int front=-1;
int rear=-1;
void enqueue(int n){
	if((rear==9&&front==0)||rear==front-1)
	printf("Overflow\n");
	else{
	if(front==-1)
		rear=front=0;
	else if(rear==9)
		rear=0;
	else
		rear=rear+1;
	q[rear]=n;
	}
}
int dequeue(){
	if(front==-1){
	printf("Underflow\n");
    return -1;}
	else{
		int x=q[front];
	if(rear==front)
		rear=front=-1;
	else if(front==9)
	    front=0;
	else
		front++;
	return x;
	}
}
void display(){
	int i;
	if(front==-1)
	printf("Underflow\n");
	//If int i is declared here then [Error]else if condition is without if is shown 
	else if(front<=rear)
	for(i=front;i<=rear;i++)
	printf("%d ",q[i]);
	else{
		for(i=front;i<10;i++)
		printf("%d ",q[i]);
		for(i=0;i<=rear;i++)
		printf("%d ",q[i]);
	}
}
int main(){
printf("Enter 1 for Enqueue, 2 for dequeue and 3 for display operation\n");
int opt;
scanf("%d",&opt);
while(opt>0){
if(opt==1){
int n;
scanf("%d",&n);
enqueue(n);}
else if(opt==2)
printf("Value returned from queue is %d\n",dequeue());
else if(opt==3)
display();
else
printf("Wrong Option\n");
printf("Enter 1 for Enqueue, 2 for dequeue and 3 for display operation\n");
scanf("%d",&opt);
}}
