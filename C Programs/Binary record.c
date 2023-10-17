#include<stdio.h>
#include<stdlib.h>
struct emp{
	char name[25];
	int age ;
	float bs;
};
int main()
{
struct emp e;
char another='y';
FILE *fp;
fp=fopen("New.TXT","wb");
if(fp==NULL)
{
	puts("Can't open file");
	exit(0001);
}
while(another=='y')
{
	printf("\nWrite name, age and basic salary of an employ\n");
	scanf("%s%d%f",e.name,&e.age,&e.bs);
	fwrite(&e,sizeof(e),2,fp);
	printf("Wanna enter info of new employ y/n");
	fflush(stdin);
	another=getche();
}
fclose(fp);
return 0;
}
