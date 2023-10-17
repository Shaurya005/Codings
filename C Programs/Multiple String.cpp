#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int i,j;char str[10]="";
	char a[5][20]={"Shaurya Jaiswal","Aditya Singh","Anurag Sharma","Purushottam Rawat","Aditya Bharti"};
	for(i=0;i<5;i++){
		for(j=strlen(a[i])-1;j>=0;j--){
			if(a[i][j]!=' ')
			str[strlen(a[i])-1-j]=a[i][j];
			else{
			str[strlen(a[i])-1-j]='\0';//Prints wrong result if we don't use it.
			break;}
		}
		strrev(str);
		printf("Title of %s is %s\n",a[i],str);//a[i] is basically address here
		//strcpy(str,""); It won't work here
	}
	
}
