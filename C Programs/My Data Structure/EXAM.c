#include<stdio.h>
void fun(char* str1,char *str2){
	char *str=str1;
	str1=str2;
	str2=str;
	printf("%s %s",str1,str2);
}

int main(){
	int (*p)[12][17];
	printf("%d",sizeof(p));
	
	char* str1="Hey";
	char* str2="How are you?";
	fun(str1,str2);  
	printf("%s %s\n",str1,str2);
	
	int n=5;
	int *a=&n;
	void *pp;
	pp=a;
	/*
	static int i=0;
	while(i<=10){
		(i>2)?i++:i--;
	}
	printf("%d",i);
	*/
	char *ptr;int i;
	for(i=0;i<3;i++){
	scanf("%s",(ptr+i));
	}
    for(i=0;i<3;i++){
	printf("%c",*(ptr+i));
	}
}
