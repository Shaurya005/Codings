#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct tree
{char Info;
 struct tree *left;
 struct tree *right;
}*root,*p;

void Insert(struct tree *r,struct tree *q)
{char ch;
 printf("Insert node at left or right");
 fflush(stdin);
 ch=getchar();
 if(ch=='l')
 {if(r->left==NULL)
  r->left=q;
  else Insert(r->left,q);
  }
 else
 {if(r->right==NULL)
  r->right=q;
  else Insert(r->right,q);
  }
}

void InOrder(struct tree *r)
{if(r!=NULL)
 {InOrder(r->left);
  printf("\t %c",&r->Info);
  InOrder(r->right);
  }
}

void PreOrder(struct tree *r)
{if(r!=NULL)
 {printf("\t %c",&r->Info);
  PreOrder(r->left);
  PreOrder(r->right);
  }
}

void PostOrder(struct tree *r)
{if(r!=NULL)
 {PostOrder(r->left);
  PostOrder(r->right);
  printf("\t %c",&r->Info);
  }
}

void main()
{char ch;
 clrscr();
 root=NULL;
 do
 {p=(struct tree*)malloc(sizeof(struct tree));
  p->left=NULL;
  p->right=NULL;
  printf("Enter Node");
  fflush(stdin);
  scanf("%c",&p->Info);
  if(root==NULL)
  root=p;
  else
  Insert(root,p);
  printf("Another Node");
  fflush(stdin);
  ch=getchar();
  }while(ch!='n');
  printf("PreOrder");
  PreOrder(root);
  printf("InOrder");
  InOrder(root);
  printf("PostOrder");
  PostOrder(root);
  getch();
}