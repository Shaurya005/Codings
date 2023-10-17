#include<stdio.h>
#include<string.h>
int main()
{
	char str[]={'H','o','I','e',65};//prints HoIeA
	char str22[]="Hello";
	printf("%s\n",str);
	printf("%s\n",str22);
	printf(5+"good Morning\n");//prints string starting from 5th index  
	printf("%c\n","abcdefgh"[7]);//prints character at 4th index
	printf("%d %d %d\n",sizeof('3'),sizeof("3"),sizeof(378));
	char *str1="United";
	char *str2="Front";
	char *str3;
	str3=strcat(str1,str2);
	printf("%s\n",str3);
	return 0;
}
