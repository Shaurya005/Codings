#include<stdio.h>
int main(){
    int n,i,j,k,l,m;
    scanf("%d", &n);
    for(i=n;i>=1;i--)
    {
        for(j=n;j>=i;j--)
        printf("%d",j);
        for(k=i;k>=2;k--)
        if(k!=1)
        printf("%d",i);
        for (l = i; l >= 3; l--)
        if(l!=1)
        printf("%d", i);
        for(m=i;m<=n;m++)
        if(m!=1)
        printf("%d",m);
        printf("\n");
    }
      for(i=2;i<=n;i++)
    {
    	for(j=n;j>=i;j--)
    	printf("%d",j);
    	for(k=1;k<=i;k++)
    	printf("%d",i);
    	for(l=3;l<=i;l++)
    	printf("%d",i);
    	for(m=i+1;m<=n;m++)
    	printf("%d",m);
    	printf("\n");
    }//Complete the code below
}
