#include<stdio.h>
#define max 20
int q[max],front=-1,rear=-1;
void enque(int q[]){
    int num;
	printf("Enter number to add\n");
	scanf("%d",&num);
	if(rear==max-1){
		printf("Overflow\n");
		return ;
	}
	if(front==-1)
		front=rear=0;
	else
	   rear++;
	q[rear]=num;
}
int deque(int q[]){
	if(front==-1){
	printf("Underflow");
	return -1;}
		int temp=q[front];
		if(front==rear)
		front=rear=-1;
		else
		front++;
	return temp;
}
void display(int q[]){
	if(front==-1){
	printf("Underflow");
	return ;}
    int i;
	for(i=front;i<=rear;i++)
	printf("%d ",q[i]);
	}

int main()
{
	int opt,temp;
	printf("Enter your option\n");
	scanf("%d",&opt);
	while(opt>=0){
		switch(opt){
			case 1:
				enque(q);
				break;
			case 2:
				display(q);
				break;
			case 3:
				temp=deque(q);
				break;
			default:
				printf("\nWrong Option\n");
		}
		printf("Enter your next option\n");
		scanf("%d",&opt);
	}
}
