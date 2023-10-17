#include<stdio.h>
#include<stdlib.h>
struct tree{
	struct tree* left;
	struct tree* right;
	int data;
};
typedef struct tree tr;
tr *tree=NULL;
tr *parent=NULL;
tr *queue[20];
int rear=-1,front=-1;
void enque(tr* ptr){
	if(front==-1)
	{
	front=rear=0;
	queue[rear]=ptr;}
	else
	queue[++rear]=ptr;
}
tr* deque(){
	if(front==-1){
	printf("Underflow");
	return NULL;}
	tr* temp=queue[front];
	if(front==rear)
	front=rear=-1;
	else
	front++;
	return temp;
}
tr *st[10];
int top=-1;
void push(tr *node){
	st[++top]=node;
}
tr* pop(){
	return st[top--];
}
tr *findLargestElement(tr *ptr){
	if(ptr->right==NULL)
	return ptr;
	else
	return findLargestElement(ptr->right);
}
tr *findSmallestElement(tr *ptr)
{
	if(ptr->left==NULL)
	return ptr;
	return findSmallestElement(ptr->left);
}
void create(){
	int num;
	scanf("%d",&num);
	tr *node,*ptr,*preptr;
	while(num>0){
		node=(tr *)malloc(sizeof(tr));
		node->left=node->right=NULL;
		node->data=num;
	    if(tree==NULL)
	    	tree=node;
	    else{
	    ptr=tree;
	    while(ptr){
	    	preptr=ptr;
			if(ptr->data>num)
	    	ptr=ptr->left;
	    	else
	    	ptr=ptr->right;
		}
		if(preptr->data>num)
	    preptr->left=node;
	    else
	    preptr->right=node;
		}
		printf("Enter next number to input\n");
		scanf("%d",&num);}
	}
void PreOrder(tr *r){
	if(r){
		printf("%d ",r->data);
		PreOrder(r->left);
		PreOrder(r->right);
	}
}
void insert(tr *ptr,int val){//It can be done directly without recursion also like create function
	if(ptr==NULL){
		tr *node=(tr *)malloc(sizeof(tr));
		node->data=val;
		node->left=node->right=NULL;
		if(val<parent->data)
		parent->left=node;
		else
		parent->right=node;}
	else if(val<ptr->data){
	parent=ptr;insert(ptr->left,val);}
	else{
	parent=ptr;insert(ptr->right,val);}
}
void delete_(tr *ptr,int val){
	if(val<ptr->data){
	parent=ptr;delete_(ptr->left,val);}
	else if(val>ptr->data){
	parent=ptr;delete_(ptr->right,val);}
	else{
		tr *temp=ptr;
		if(ptr->left==ptr->right==NULL){
		ptr=NULL;free(temp);}
		else if(ptr->left==NULL){
			if(val<parent->data)
		parent->left=ptr->right;
		else
		parent->right=ptr->right;
			free(temp);}
		else if(ptr->right==NULL){
			if(val<parent->data)
		        parent->left=ptr->left;
		    else
		        parent->right=ptr->left;
		    free(temp);}
		else{
			temp=findLargestElement(ptr->left);
			ptr->data=temp->data;
			delete_(ptr->left,temp->data);
		}
		}
}
int count(tr *ptr){
	if(ptr==NULL)
	return 0;
	else{
	int m=0,n=0;//If Static int were there then wrong results are coming.
	m=count(ptr->left);
	n=count(ptr->right);
	return m+n+1;
}}
int getHeight(struct tree* root) {
    if(root==NULL||(root->left==NULL&&root->right==NULL))
    return 0;
        return ((getHeight(root->left)>getHeight(root->right))?getHeight(root->left)+1:getHeight(root->right)+1);
}
void search(tr *ptr,int n){
	if(ptr==NULL)
	printf("Value Not Found\n");
	else if(n<ptr->data)
	search(ptr->left,n);
	else if(n>ptr->data)
	search(ptr->right,n);
	else
	printf("Value Found in tree\n");
}
void LevelOrder(tr *ptr){
	if(ptr){
		enque(ptr);
		while(front!=-1){
		ptr=deque();
		printf("%d ",ptr->data);
		if(ptr->left)
		enque(ptr->left);
		if(ptr->right)
		enque(ptr->right);
		}
	}
}
int main(){
	int val,num,opt;
	printf("***MAIN MENU***\n1. Create Binary Tree\n2. PreOrder Traversal\n3. Insert element in tree\n4. Delete a particular element\n5. Find Largest Element\n 6. Find Smallest Element\n 7. Total no. of nodes\n 8. Search for a particular element\n");
	printf("\nEnter your option ");
	scanf("%d",&opt);
    while(opt>0)
    {
    switch(opt){
	case 1:
	create();break;
	case 2:
	PreOrder(tree);break;
	case 3:
	printf("Enter value to insert ");
	scanf("%d",&val);
	insert(tree,val);break;
	case 4:
	printf("Enter value to delete ");
    scanf("%d\n",&val);//\n does'nt work in scanf
	delete_(tree,val);break;
	case 5:
	printf("The Largest Element is %d ",findLargestElement(tree)->data);break;
	case 6:
	printf("The Smallest Element is %d ",findSmallestElement(tree)->data);break;
	case 7:
	printf("Total No. of nodes is %d ",count(tree));break;
	case 8:
	printf("Enter the element to be searched for ");
	int n;scanf("%d",&n);
	search(tree,n);
	}
	printf("\nEnter next option ");
	scanf("%d",&opt);
	}
	printf("Level Order Traversal :");
	LevelOrder(tree);
}
