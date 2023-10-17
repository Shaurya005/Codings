#include<stdio.h>
int main()
{
	int i,j,k,m,l=0,n=0;
	for(i=1;i<=5;i++)
	{
	for(j=i;j<=4;j++)
	printf(" ");
	for(k=i;k<=(2*i-1);k++)
	printf("%d",k);
	if(i>=2)
	{
	for(l=n;l>=i;l--)//But why wrong output if for(;l>=i;l--) and printf("%d",l); is used and l+=2; is done at last line in code  
	printf("%d",l);
    }
	printf("\n");
	n+=2;
}
}

