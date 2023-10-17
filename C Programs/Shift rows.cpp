#include<stdio.h>
void shift(int (*p)[5])
{
	int i,j,*s;
	for(i=0;i<4;i++)
	{
		s=(int *)(p+i);
		printf("%u\n",s);
		for(j=0;j<5;j++)
		{
		if(j<3)
		*(s+j)=*(s+j+2);
		if(j>=3)
		*(s+j)=*(s+j-3);
	}
}
}
int main()
{
	int n[4][5],i,j;
	for(i=0;i<4;i++)
	for(j=0;j<5;j++)
	scanf("%d",&n[i][j]);
	shift(n);
	for(i=0;i<4;i++)
	{
	for(j=0;j<5;j++)
	printf("%d ",n[i][j]);
	printf("\n");
    }
}
