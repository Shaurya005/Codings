#include<stdio.h>
#include<stdlib.h>
int a[100];
int top=-1;
void push(int n){
	if(top==99)
	{
		printf("Stack Overflow");
		exit(111);
	}
	else
	a[++top]=n;
}
int pop(){
	return a[top--];
}
int main(){
		
	int n,opt;
	printf("Enter 1 to push and 2 to pop from stack\n");
	scanf("%d",&opt);
	while(opt>0){
	if(opt==1){
		printf("Enter value to push in stack\n");
		scanf("%d",&n);
		push(n);
	}
	else if(opt==2)
	printf("The value popped from stack is %d\n",pop());
	else
	printf("wrong Choice\n");
	printf("Enter 1 to push and 2 to pop from stack\n");
	scanf("%d",&opt);
}}
