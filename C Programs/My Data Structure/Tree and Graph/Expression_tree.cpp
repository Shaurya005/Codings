#include<stdio.h>
#include<stdlib.h>
#include<String.h>
struct tree{
	struct tree* left;
	struct tree* right;
	char ch;
};
typedef struct tree exp_tree;
exp_tree *st[10];
int top=-1;

void push(exp_tree *node){
	st[++top]=node;
}
exp_tree* pop(){
	return st[top--];
}
void inorder(exp_tree *ptr){
	if(ptr!=NULL){
		inorder(ptr->left);
		printf("%c ",ptr->ch);
		inorder(ptr->right);
	}
}
void PreOrder(exp_tree *r){
	if(r){
		printf("%c ",r->ch);
		PreOrder(r->left);
		PreOrder(r->right);
	}
}
void PostOrder(exp_tree *ptr){
	if(ptr!=NULL){
		PostOrder(ptr->left);
		PostOrder(ptr->right);
		printf("%c ",ptr->ch);
	}
}
int main(){
	char str[20];char c;
	printf("Enter any postfix expression\n");
	gets(str);int i=0;
	exp_tree *node,*ptr1,*ptr2;
	while(i<strlen(str)){
	c=str[i];
	if((c>=65&&c<=90)||(c>=97&&c<=122)){
		node=(exp_tree*)malloc(sizeof(exp_tree));
		node->left=node->right=NULL;
		node->ch=c;
		push(node);
	}
	else{
		ptr1=pop();
		ptr2=pop();
		node=(exp_tree*)malloc(sizeof(exp_tree));
		node->left=ptr2;node->right=ptr1;
		node->ch=c;
		push(node);
	}
	i++;
}
exp_tree *root=pop();
printf("Your Infix Expression is: ");
inorder(root);
printf("\nYour Prefix expression is: ");
PreOrder(root);
printf("\nYour Postfix expression is: ");
PostOrder(root);
}
