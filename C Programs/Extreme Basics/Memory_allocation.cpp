#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char *z=NULL;
	printf("Requesting space for\"Welcome\"\n");
	z=(char *)malloc(strlen("Welcome")+1);
	if(!z){
		printf("Failed to allocate memory ");
		exit(1234);}
    printf("About to copy \"Welcome\" to z at address %u\n",z);
	strcpy(z,"Welcome");
	printf("String copied\n");
	printf("%s\n",z);		
}

