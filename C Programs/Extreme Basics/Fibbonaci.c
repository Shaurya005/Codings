#include<stdio.h>
int fibbo(int);
int main()
{
	int i=0,n,c;
	scanf("%d",&n);
	printf("Fibbonacci series\n");
	for(c=1;c<=n;c++)
	{
		printf("%d\n",fibbo(i));
		i++;
}
}
int fibbo(int n)
{
	if(n==0)
	return 0;
	if(n==1)
	return 1;
	else
	return(fibbo(n-1)+fibbo(n-2));
}
