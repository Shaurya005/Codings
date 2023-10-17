#include<stdio.h>
#include<ctype.h>
float st[50];
int top=-1;

void push(float st[],float val){
	top++;
	st[top]=val;
}

float pop(){
	float val=st[top];
	top--;
	return val;
}

float evaluate(char exp[]){
	float val;int i=0;
	while(exp[i]!='\0'){
		if(isdigit(exp[i])){
			push(st,(float)(exp[i]-'0'));
			//If exp[i]-'0' is not done then it'll take ASCII value of exp[i] when converting into float as exp[i] is initially a character.
			i++;
		}
		else if(exp[i]=='+'||exp[i]=='/'||exp[i]=='-'||exp[i]=='*'||exp[i]=='%'){
			float b=pop();
			float a=pop();
			if(exp[i]=='+')
			val=a+b;
			else if(exp[i]=='/')
			val=a/b;
			else if(exp[i]=='-')
			val=a-b;
			else if(exp[i]=='*')
			val=a*b;
			push(st,val);
			i++;
		}
		else{
			printf("Invalid element is found\n");
			break;
		}
	}
	return st[top];
}

int main()
{
	char exp[50];
	printf("Enter postfix expression\n");
	gets(exp);
	float result=evaluate(exp);
	printf("Result of expression is %0.2f",result);
}
