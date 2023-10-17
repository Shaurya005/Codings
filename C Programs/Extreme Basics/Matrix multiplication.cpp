#include<stdio.h>
int main()
{
	int p,q,r,s,prod=0;
	//if here two arrays are defined then run time error
	printf("Enter row and column of first array\n");
	scanf("%d%d",&p,&q);
	printf("Enter row and column of second array\n");
	scanf("%d%d",&r,&s);
	int m[p][q],n[r][s];
	if(q==r)
	{
	printf("Multiplication is possible\n");
	int i,k,j;
	printf("Enter first array\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		scanf("%d",&m[i][j]);
		printf("\n");
	}
	printf("\nEnter second array\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<s;j++)
		scanf("%d",&n[i][j]);
		printf("\n");
    }
	printf("Multiplication of matrices is\n");
	for(i=0;i<p;i++)
	{
		for(k=0;k<s;k++)
		{
			prod=0;
		for(j=0;j<q;j++)
		prod=prod+(m[i][j]*n[j][k]);
		
		printf("%d ",prod);
}
	printf("\n");
	}
	}
	else
	printf("Multiplication is not possible");
}
