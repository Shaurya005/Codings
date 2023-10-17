#include<stdlib.h>
#include<stdio.h>
struct tree{
	int data;
	struct tree* left;
	struct tree* right;
};
typedef struct tree BST;
BST *root=NULL;
BST* create(BST *root)//If here i am changing root then it is changing local variable root as here root is defined as local inside function bracket
//It means it does not effect external root variable but if root is not defined inside function bracket then it would treat root as external variable. 
{
	BST *preptr,*ptr,*tr;int n;
	printf("Enter first data\n");
	scanf("%d",&n);
	while(n!=-1){
		tr=(BST *)malloc(sizeof(BST));
		tr->left=tr->right=NULL;
		tr->data=n;
		if(root==NULL)
			root=tr;
		else{
			ptr=root;
			while(ptr){
				preptr=ptr;
				if(n<ptr->data)
				ptr=ptr->left;
				else
				ptr=ptr->right;
			}
			if(n<preptr->data)
			preptr->left=tr;
			else
			preptr->right=tr;
		}
		printf("Enter another data\n");
		scanf("%d",&n);
	}
	return root;
}
void display(BST *ptr){	
	if(ptr!=NULL){
	printf("%d ",ptr->data);
	display(ptr->left);
	display(ptr->right);
}}
int main()
{
	root=create(root);
	display(root);
}
