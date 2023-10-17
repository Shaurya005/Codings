#include<stdio.h>
#include<string.h>
int main()
{
	char c[25],s[10];int a=45;int *b=&a;printf("%u",b);
	printf("\nInput string\n");
	scanf("%[^e]s\n",&c);
	fflush(stdin);
	printf("Your inputted string is %s\n",c);
	scanf("%s",&s);
	printf("Your inputted string is %s",s);
	char ch[]={'a','s','d','r',};//It is right here
	printf("%s\n",ch);
	printf("a");
	char chh[29];
	chh[0]='jjyug97';//It would take only last character i.e. 7
	printf("\n\n%c",chh[0]);
	//chh="ydcytyyyyuhlibl";//Invalid in array
	strcpy(chh,"cnhtfm");//It is valid
}
