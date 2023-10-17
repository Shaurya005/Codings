#include <stdio.h>
void pointers();
int main()
{
	int i=378575,j=56,k=544897;
	printf("Address of i = %u\n",&i);
	printf("Address of j = %u\n",&j);
	printf("Address of k = %u\n",&k);
printf("Value of j = %d\n",i);
printf("Value of j = %d\n\n\n",*(&i));
pointers();
}
void pointers()
{
	int i=3,*j;
	j=&i;
    printf("Address of i = %u\n",&i);
	printf("Address of i = %u\n",j);
	printf("Address of j = %u\n",&j);
	printf("Value of j = %u\n",j);
	printf("Value of i = %d\n",i);
	printf("Value of i = %d\n",*(&i));
	printf("Value of i = %d\n",*j);
}
