#include<stdio.h>
#include<stdlib.h>
int main()
{
	char another='y';
	struct emp
	{
	char name[25];
	int age;
	float bs; 	
	};
	FILE *fs;
	struct emp e;
	fs=fopen("NewOne.txt","w");
	if(fs==NULL)
	{
		puts("Can not open file\n");
		exit(54);
	}
	while(another=='y')
	{
	printf("\nWrite name, age and basic salary of an employ\n");
	scanf("%s%d%f",e.name,&e.age,&e.bs);
	fprintf(fs,"%s %d %.2f\n",e.name,e.age,e.bs);
	printf("Wanna enter info of new employ y/n ");
	fflush(stdin);
	another=getche();
	}
}
