#include<stdio.h>
int st1[20];
int st2[20];
int top1=-1;
int top2=-1;
void push(int st[],int top,int x){
	if(top==19)
	printf("Stack Overflow\n");
	else
	st[++top]=x;
	if(st==st1)
	top1++;
	else
	top2++;
}
int pop(int st[],int top){
	if(top==-1){
	printf("Stack underflow\n");
	return -1;}
	else{
		if(st==st1)
	      top1--;
	    else
	      top2--;
		return st[top--];}
}
void enque(int x){
	if(top1+top2==18)//Making queue of size 20
	printf("Overflow\n");
	else
	push(st1,top1,x);
}
int dequeue(){
	int s;
	if(top1==-1&&top2==-1){
		printf("Underflow\n");
	    return -1;}
	if(top2==-1)
		while(top1!=-1){
			s=pop(st1,top1);
			push(st2,top2,s);
		}
	return pop(st2,top2);
}
int main()
{
printf("Enter 1 for Enqueue, 2 for dequeue and 3 for display operation\n");
int opt;
scanf("%d",&opt);
while(opt>0){
if(opt==1){
int n;
scanf("%d",&n);
enque(n);}
else if(opt==2)
printf("Value returned from queue is %d\n",dequeue());
//else if(opt==3)
//display();
else
printf("Wrong Option\n");
printf("Enter 1 for Enqueue, 2 for dequeue and 3 for display operation\n");
scanf("%d",&opt);
}}
