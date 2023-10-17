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
	printf("%s %s",str1,str2);
}
