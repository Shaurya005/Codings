#include<stdio.h>
int q1[10];
int q2[10];
int f1=-1,f2=-1,r1=-1,r2=-1;
void enque(int q[],int f,int x)
{
	if(f==9)
	printf("Overflow\n");
	else{
	if(q==q1)
	{
		if(f1==-1){
			f1=0;r1=0;
		}
		else
		q1[++r1]=x;
	}
	else{
		if(f2==-1){
			f2=0;r2=0;
		}
		else
		q2[++r2]=x;
    }
}}
int deque(int q[],int f)
{
	if(f==-1){
		printf("Underflow\n");
	    return -1;}
	else{
		int x;
		if(q==q1){
			x=q1[f1];
			if(f1==r1){
				f1=r1=-1;
			}
			else
			f1++;
		}
		else{
			x=q2[f2];
			if(f2==r2){
				f2=r2=-1;
			}
			else
			f2++;
		}
		return x;
		}
}
void push(int x){
	if(r1+r2==8)//For stack of size 10
	printf("Overflow\n");
	else
	enque(q1,f1,x);
}
int pop(){
	int x,p;
    if(f2==-1&&f1==-1){
    	printf("Underflow\n");
    	return -1;}
    while(f1!=r1){
    	x=deque(q1,f1);
    	enque(q2,f2,x);}
	p=deque(q1,f1);
	while(f2!=-1){//Without it, it would work correctly unless pop operation is not done consecutively
		x=deque(q2,f2);
		enque(q1,f1,x);}
	return p;
}
void display(){
	int x,f=f1,r=r1;
    if(f2==-1&&f1==-1)
    	printf("Underflow\n");
    while(f1!=-1){
	while(f1!=r1){
    	x=deque(q1,f1);
    	enque(q2,f2,x);}
	printf("%d ",deque(q1,f1));
	while(f2!=r2){//Without it, it would work correctly unless pop operation is not done consecutively
		x=deque(q2,f2);
		enque(q1,f1,x);}
	printf("%d ",deque(q2,f2));
}
f1=f;r1=r;
}
int main()
{
printf("Enter 1 for Push, 2 for Pop and 3 for display operation\n");
int opt;
scanf("%d",&opt);
while(opt>0){
if(opt==1){
int n;
scanf("%d",&n);
push(n);}
else if(opt==2)
printf("Value returned from stack is %d",pop());
else if(opt==3)
display();
else
printf("Wrong Option\n");
printf("\nEnter 1 for push, 2 for pop and 3 for display operation\n");
scanf("%d",&opt);
}}
