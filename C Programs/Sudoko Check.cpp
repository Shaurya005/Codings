#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("Enter your puzzle solution\n");
	//Code using logic that total sum in row will be 45,have exceptions
	int n[9][9],a[9],i,j,k,l,y,z,num,flag=0;
	for(i=0;i<9;i++)
	{
	for(j=0;j<9;j++)
	{
	scanf("%d",&n[i][j]);
	for(l=0;l<j;l++)
	{
	if(n[i][j]==n[i][l]){
	flag=1;
	break;}
	}
	if(flag==1){
    printf("\nWrong solution\nRow Check Failure");
    exit(1111);}
    }
    if(flag==1)
    exit(1111);//if here break is not used then it would recieve next row elements
	}//Till here row check has been done
	
	//Now for each 9 blocks
	for(i=0;i<=6;i+=3)
		for(j=0;j<=6;j+=3)
		{
		y=0;
		for(k=0+i;k<3+i;k++)
		for(l=0+j;l<3+j;l++)
		{
		a[y]=n[k][l];
		for(z=0;z<y;z++)
		if(a[z]==n[k][l])
		flag=1;
		y++;
		}
	}
	if(flag==1)
	{
		printf("\nBlock Check Failure\n");
		exit(1111);
	}
	//Now for checking column wise
	for(i=0;i<9;i++)
	for(j=0;j<9;j++)
	{
		num=n[j][i];
		for(k=0;k<j;k++)
			if(num==n[k][i])
			flag=1;
	}
	if(flag==1)
	printf("\nColumn Check Failure\n");
	else
	printf("\nOverall Correct Result\n");
}
