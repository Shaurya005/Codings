#include<stdio.h>
	struct book{
		char name[25];
		char author[25];
		int callno;
	};
	void display(struct book *b)
	{
	printf("%s %s %d\n",b->name,b->author,b->callno);	
	}
int main()
{
	struct book b1={"Let Us C","YPK",101},b2={"fxn","yfjvh",89};
	struct book *ptr;
	ptr=&b1;	
	printf("%s %s %d\n",b1.name,b1.author,b1.callno);
	printf("%s %s %d\n",b2.name,b2.author,b2.callno);
	printf("%s %s %d\n",ptr->name,ptr->author,ptr->callno);
	display(&b1);
}
