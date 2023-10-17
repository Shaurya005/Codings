#include<stdio.h>
int main()
{
	int a[5],b[5];
	int i,j;
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	int *k,*l;
	k=a[0];
	l=b[0];
	for(j=0;j<5;j++)
	{
		*l=*k;
		printf("%d %d\n",*l,*k);
		k=k+1;l=l+1;
	}

}
