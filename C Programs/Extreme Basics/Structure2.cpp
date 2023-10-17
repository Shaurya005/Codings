#include<stdio.h>
int main()
{
struct book {
	char name[25];
	int pages;
	float price;
}b1,b2,b3;
struct book b4={"shaurya",234,345.67},b5=32{"jaiswal",567,768.50}
,b6;
scanf("%s%d%f",&b1.name,&b1.pages,&b1.price);
scanf("%s%d%f",&b2.name,&b2.pages,&b2.price);
scanf("%s%d%f",&b3.name,&b3.pages,&b3.price);
printf("\nHere is your input\n");
printf("%s %d %f\n",b1.name,b1.pages,b1.price);
printf("%s %d %f\n",b2.name,b2.pages,b2.price);
printf("%s %d %f\n",b3.name,b3.pages,b3.price);
printf("%s %d %f\n",b4.name,b4.pages,b4.price);
printf("%s %d %f\n",b5.name,b5.pages,b5.price);	
}

