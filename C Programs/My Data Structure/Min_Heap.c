#include<stdio.h>
struct heap{
	struct heap *left;
	struct heap *right;
	int data;
};
typedef struct heap heap;
heap *root=NULL;
heap *insert(heap* root,int num){
	if(root==NULL){
	heap *node=(heap*)malloc(sizeof(heap));
	node->left=node->right=NULL;
	node->data=n;
	}
	else if(!root->left)
	insert(root->left,num);
	else if(!root->right)
	insert(root->right,num);
}
void create_heap(){
	int n;
	printf("Enter first number :");
	scanf("%d",&n);
	heap *node=(heap*)malloc(sizeof(heap));
	node->left=node->right=NULL;
	node->data=n;
	heap *ptr=root
	while(n!=-1){
		if(!root)
			root=node;
		else if(!(root->left)){
		root->left=node;
		root=root->left;}
		else{
	    root->right=node;    
		root=root->right;}
		printf("Enter next number :");
	    scanf("%d",&n);
	}
}
//int main(){
	

