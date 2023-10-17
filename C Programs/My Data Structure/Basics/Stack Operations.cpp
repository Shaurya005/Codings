#include<stdio.h>
#define max 10
#define p printf
#define s scanf
int top=-1;
void push(int a[])
{
	int val;
	p("Enter the value to be pushed in stack\n");
	s("%d",&val);
	while(val!=-1){
	if(top==max-1){
	printf("Stack overflow\n");
	break;}
	else{
		top++;
		a[top]=val;
		s("%d",&val);
	}
	}
}
int pull(int a[])
{
 if(top==-1)
 {
 	p("Stack Underflow\n");
 	return -1;
	 }	
	 else{
	 	int val=a[top];
	 	top--;
	 	return val;
	 }
}
int peek(int a[])
{
	if(top==-1)
	{
	p("Stack Underflow\n");
	return -1;
    }
    else{
    	return a[top];
	}
}
void display(int a[])
{
	int top1=top;
if(top==-1)
{
 	p("Stack Underflow\n");
}
else{
	while(top!=-1)
	{
		p("%d ",a[top]);
		top--;//Here top becomes -1 again so on selcting option 2 or 3 it would say Stack underflow so we stored value of top already
	}
	top=top1;
}
}
int main()
{
	int stack[max],opt,val;//-1 means NULL i.e. Underflow
	do{
		p("\n***MAIN MENU***\n");
		p("1. PUSH\n");
		p("2. PULL\n");
		p("3. PEEK\n");
		p("4. DISPLAY\n");
		p("5. EXIT\n");
		p("Enter your option\n");
		s("%d",&opt);
		switch(opt)
		{
			case 1:
				push(stack);
				break;
			case 2:
				val=pull(stack);
				if(val!=-1)
				p("Value pulled from the stack is %d",val);
				break;
			case 3:
				val=peek(stack);
				if(val!=-1)
				p("Value stored at the top of stack is %d",val);
				break;
			case 4:
				display(stack);
				break;
			default:
				p("Wrong choice");
			}
	}while(opt!=5);	
}
