#include<stdio.h>
#define p printf
#define s scanf
int queue[30];
char queue_char[30];
int front=-1,rear=-1;
int front_=-1,rear_=-1;
int top_=-1;char stack_char[30];
int top=-1;int stack[30];
void enque(int num){
	if(rear==29){
		printf("Overflow\n");
		return ;
	}
	if(front==-1)
		front=rear=0;
	else
	queue[++rear]=num;
}
int deque(){
	if(front==-1){
	printf("Underflow");
	return -1;}
	int temp=queue[front];
	if(front==rear)
	front=rear=-1;
	else
	front++;
	return temp;
}
void enque_char(char ch){
	if(rear_==29){
		printf("Overflow\n");
		return ;
	}
	if(front_==-1)
		front_=rear_=0;
	else
	queue[++rear_]=ch;
}
char deque_char(){
	if(front_==-1){
	printf("Underflow");
	return -1;}
	char temp=queue[front_];
	if(front_==rear_)
	front_=rear_=-1;
	else
	front_++;
	return temp;
}

void push(int num)
{
	if(top==29){
	printf("Stack overflow\n");
	return ;}
		stack[++top]=num;
}
int pop()
{
 if(top==-1)
 {
 	p("Stack Underflow\n");
 	return -1;
	 }	
	return stack[top--];
}

void push_char(char ch)
{
	if(top==29){
	printf("Stack overflow\n");
	return ;}
		stack_char[++top]=ch;
}
char pop_char()
{
 if(top==-1)
 {
 	p("Stack Underflow\n");
 	return '\0';
	 }	
	return stack_char[top--];
}
