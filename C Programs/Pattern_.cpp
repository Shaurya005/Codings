#include<stdio.h>
int main()
{
	int i,j,m=0,k,n;char ch;
	printf("Enter any character and max. odd width of pattern: ");
	scanf("%c %d",&ch,&n);
	int l=(n/2)+1;
	for(i=1;i<=n;i++){
		if(i<=l){
			for(j=i;j<l;j++)
			printf(" ");
			for(k=1;k<2*i;k++)
			if(k==1||k==2*i-1)
			printf("%c",ch);
			else
			printf(" ");
			printf("\n");
		}
		else{//9-6  7-5  5-4
			for(j=l;j<i;j++)
			printf(" ");
			for(k=i;k<=n+2;k++)
			if(k==1||k==i-m)
			printf("%c",ch);
			else
			printf(" ");
			printf("\n");
			m+=l;
		}
	}
}
