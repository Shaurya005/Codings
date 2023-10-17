#include<stdio.h>
int main()
{
	int i,j,k,l,p,q,count=1;int n[2][2];
	for(i=1;i<5;i++)
	{
		n[0][0]=i;
		for(j=1;j<5;j++)
		{
			n[0][1]=j;
			for(k=1;k<5;k++)
			{
				n[1][0]=k;
				for(l=1;l<5;l++)
				{
					n[1][1]=l;
					printf("%dth matrix is \n",count++);
					for(p=0;p<2;p++){
					for(q=0;q<2;q++)
					printf(" %d ",n[p][q]);
					printf("\n");
				    }
				    printf("\n\n"); 
}   }   }   }   }
