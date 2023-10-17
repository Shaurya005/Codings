//Palindrome by stack
//Infix to Postfix
//Multiple stack
//Linked List
#include<stdio.h>
int st[20];
int top=-1;
void push(int x){
	if(top==19)
	printf("Stack Overflow\n");
	else
	st[++top]=x;
}
char pop(){
	if(top==-1){
	printf("Stack underflow\n");
	return '\0';}
	else
		return st[top--];
}
int main()
{
	char ch[20];
	printf("Enter string to check for palindrome number\n");
	gets(ch);int i=0;
	while(ch[i]!='\0'){
		push(ch[i]);
		i++;
	}
	i=0;
	while(ch[i]!='\0'){
	if(ch[i]==pop())
	i++;
	else{
		printf("Not Palindrome\n");
		return -1;}
    }
    printf("Palindrome\n");
    return 1;
}
