#include<stdio.h>
#include<stdlib.h>
typedef struct info mll;
struct info{
	char *ch;
	int marks;
	mll *next_alpha;
	mll *next_marks;
};
mll *alpha_start=NULL;
mll *marks_start=NULL;

mll *insert_alpha(mll *alpha_start){
	mll *ptr;
	printf("Enter Name of Student\n");
	char *c;
	scanf("%s",c);
	while(c[0]!='!'){
	mll *node=(mll *)malloc(sizeof(mll));	
	node->ch=c;
	if(alpha_start==NULL){
		alpha_start=node;
		alpha_start->next_alpha=NULL;
	}
	else{
		ptr=alpha_start;
		while(ptr->next_alpha!=NULL)
			ptr=ptr->next_alpha;
		ptr->next_alpha=node;
		node->next_alpha=NULL;
	}
	printf("Enter Name of  Other Student\n");
	scanf("%s",c);
    }
    return alpha_start;
}
mll *insert_marks(mll *marks_start){
	mll *ptr;
	printf("Enter marks of Student\n");
	int m;
	scanf("%s",&m);
	while(m>=0){
	mll *node=(mll *)malloc(sizeof(mll));
	node->marks=m;
	if(marks_start==NULL){
		marks_start=node;
		marks_start->next_marks=NULL;
	}
	else{
		ptr=marks_start;
		while(ptr->next_marks!=NULL)
			ptr=ptr->next_marks;
		ptr->next_marks=node;
		node->next_marks=NULL;
	}
	printf("Enter marks of Other Student\n");
	scanf("%d",&m);
    }
    return marks_start;
}
void display(mll *alpha_start){
	mll *ptr=alpha_start;
	if(alpha_start==NULL)
	printf("UnderFlow\n");
	else{
		printf("fjcv,bk");
		while(ptr->next_alpha!=NULL){
			printf("%s",ptr->ch);
			printf("%d",ptr->marks);
			ptr=ptr->next_alpha;
		}
    }
}
int main()
{
   int opt;
   printf("Enter option 1 for inserting information Alphabet wise or option 2 for marks wise\n");
   scanf("%d",&opt);
   while(opt!=-1)
   {
   if(opt==1)
   alpha_start=insert_alpha(alpha_start);
   else if(opt==2)
   marks_start=insert_marks(marks_start);
   else if(opt==3)
   display(alpha_start);
   else
   printf("Invalid Choice\n");
   printf("Enter another option\n");
   scanf("%d",&opt);
   }
}
