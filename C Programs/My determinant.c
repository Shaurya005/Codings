#include<stdio.h>
#include<math.h>
int determinant(int *a,int n)
{
	int det=0,b[n-1][n-1],i,j,p,q,k,l;
	if(n==2)
	return ((*a)*(*(a+3))-(*(a+1)*(*(a+2))));
	else{
		for(l=0;l<n;l++)
		{
			p=0;q=0;
			k=(int)pow(-1,l);//0+l=l 
			for(i=0;i<n-1;i++)
			for(j=0;j<n-1;j++)
				if(i!=l&&j!=l)
				{
					b[i][j]=*(a+i*n+j);
				}
				else{
					b[i][j]=*(a+i*n+j+5);
				}
			}
			
            det+=k*(*(a+l))*determinant(b,n-1);
		}
		return det;
}
int main()
{
	int p,i,j;
	printf("Enter the order  of the matrix\n");
	scanf("%d",&p);
	int n[p][p];
	printf("Enter the whole matrix\n");
	for(i=0;i<p;i++)
	for(j=0;j<p;j++)
	scanf("%d",&n[i][j]);
	printf("Determinant of the above matrix is %d",determinant(n,p));
}

