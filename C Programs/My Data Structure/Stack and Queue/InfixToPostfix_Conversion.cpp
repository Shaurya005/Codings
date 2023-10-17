#include<stdio.h>
#include<stdlib.h>//for exit
#include<string.h>
#include<ctype.h>//for isdigit and isalpha functions
#define s scanf
#define p printf
int top=-1;
char st[100];
void push(char value){
	st[++top]=value;
}
char pop(char st[]){
	return st[top--];
}
int priority(char c){
	if(c=='^')
	return 2;
	else if(c=='*'||c=='/'||c=='%')
	return 1;
	else if(c=='+'||c=='-')
	return 0;
}

void convert(char infix[],char postfix[]){
	int i=0,j=0,temp;
	while(infix[i]!='\0'){
		if(infix[i]=='('){
			push(infix[i]);
        }
		else if(isdigit(infix[i])||isalpha(infix[i])){
        postfix[j]=infix[i];
		j++;
		}
		else if(infix[i]==')'){
			while(top!=-1&&st[top]!='('){
			postfix[j]=pop(st);
			j++;}
			if(top==-1)
			p("Invalid Expression\n");
			temp=pop(st);
			}
		else if(infix[i]=='+'||infix[i]=='^'||infix[i]=='-'||infix[i]=='*'||infix[i]=='/'||infix[i]=='%'){
			while((top!=-1)&&(st[top]!='(')&&(priority(st[top])>=priority(infix[i])))
			{
				postfix[j]=pop(st);
				j++;
			}
			push(infix[i]);
		}
	else{
		p("Incorrect element is detected in expression\n");
		exit(1111);
		}
		i++;
		}
		while(top!=-1){
			postfix[j]=pop(st);
			j++;
		}
		postfix[j]='\0';//It is not necessary
}
int main()
{
	char infix[100],postfix[100];
	p("Write infix expression\n");
   	s("%s",infix);
   	strcpy(postfix,"");
	convert(infix,postfix);
   	p("Expression Converted into postfix: %s",postfix);
}
