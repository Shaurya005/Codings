#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	int nol=0,nnot=0,nob=0,noc=0;
	fp=fopen("Virus2.txt","r");
	while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF)
		break;
		noc++;
		if(ch==' ')
		nob++;
		if(ch=='\n')
		nol++;
		if(ch=='\t')
		nnot++;
	}
	fclose(fp);
	printf("Number of characters = %d\n",noc);
	printf("Number of blanks = %d\n",nob);
	printf("Number of tabs = %d\n",nnot);
	printf("Number of lines = %d\n",nol);
}
