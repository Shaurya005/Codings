#include<stdio.h>
#include<stdlib.h>
typedef struct node ll;
struct node{
	int data;
	struct node *left;
	struct node *right;
};
void PreOrder(ll *r){
	if(r){
		printf("%d ",r->data);
		PreOrder(r->left);
		PreOrder(r->right);
	}
}
void InOrder(ll *r){
	if(r){
		InOrder(r->left);
		printf("%d ",r->data);
		InOrder(r->right);
	}
}
void PostOrder(ll *r){
	if(r){
		PostOrder(r->left);
		PostOrder(r->right);
		printf("%d ",r->data);
	}
}
int main(){
	ll *node=(ll *)malloc(sizeof(ll));
	ll *tree =node;
	node->data=1;
	node->left=NULL;
    node->right=NULL;
	ll *temp=node;
	node=(ll *)malloc(sizeof(ll));
	node->data=2;
	node->left=NULL;
    node->right=NULL;
    temp->left=node;
    node=(ll *)malloc(sizeof(ll));
	node->data=3;
	node->left=NULL;
    node->right=NULL;
    temp->right=node;
    node=(ll *)malloc(sizeof(ll));
	node->data=4;
	node->left=NULL;
    node->right=NULL;
    temp->left->left=node;
    node=(ll *)malloc(sizeof(ll));
	node->data=5;
	node->left=NULL;
    node->right=NULL;
    temp->left->right=node;
    node=(ll *)malloc(sizeof(ll));
	node->data=6;
	node->left=NULL;
    node->right=NULL;
    temp->right->right=node;
    printf("Pre Order Traversal\n");
	PreOrder(tree);
    printf("\nInorder Traversal\n");
    InOrder(tree);
    printf("\nPost Order Traversal\n");
	PostOrder(tree);
}
