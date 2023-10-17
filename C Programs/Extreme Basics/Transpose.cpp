#include<stdio.h>
int main()
{
	printf("Enter row and column of matrix\n");
	int p,i,j,q;
	scanf("%d %d",&p,&q);
	int m[p][q];
	for(i=0;i<p;i++)
	for(j=0;j<q;j++)
	scanf("%d",&m[i][j]);
	printf("Transpose of the above matrix\n");
	for(i=0;i<q;i++)
	{
	for(j=0;j<p;j++)
	printf("%d ",m[j][i]);
    printf("\n");
}}   
