#include<stdio.h>
static int y;
int main()
{
	short int s =5458; //By default it is signed short int 
	short i=-487;
	long int j=43980984;   
	double d=587885.89798;
	long double dd=675674746.8779; //It can store 10 bytes of real value
	long unsigned int nn=674676789;
	unsigned long int mm=858794469;
	unsigned long jj=67667699;
	long g=4897839;
	int m=23L; //Here we want that number is given as space as long
	unsigned int l=33; //Here range is restricted to positive and is double of signed in positive terms.
    unsigned int li=-33;
	unsigned h=675675; //By default it is int
	unsigned short int sho=3246;
	unsigned short sh=324;
	char chh=253;
    char ch=254;//after 255 it shows woverflow error
	unsigned char vch=255; //after 255 it shows woverflow error i.e. max 255 can be stored in unsigned char
	printf("%d %c %d %c %d %c",chh,chh,ch,ch,vch,vch);
	unsigned char cch;//If we have not declared it unsigned then it would become infinite loop
	for(cch=0;cch<=188;cch++)
	printf("%d %c\n",cch,cch);
	
		static int z;
printf("%d   %d\n",y,z);//Hence we can see that format specifier is same as of automatic storage data type
}
