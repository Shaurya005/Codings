#include<stdio.h>
#include<math.h>
int determinant(int *a,int n)
{
	int det=0,b[n-1][n-1],i,j,p,q,k,l;
	if(k==2)
	return ((*a)*(*(a+3))-(*(a+1)*(*(a+2))));
	else{
		for(l=0;l<n;l++)
		{
			p=0;q=0;
			k=(int)pow(-1,i);//0+i=i 
			for(i=0;i<n;i++)
			if(i!=l)
			{
			for(j=0;j<n;j++)
				if(j!=l)
				{
					b[p][q]=*(a+i*n+j);
					q++;
				}
		    p++;
			}
			n-=1;
            det+=k*(*(a+l))*determinant(b,n);	
		}
		return det;
}
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

