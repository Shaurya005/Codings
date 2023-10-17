#include<stdio.h>
int* sum(int m1[2][2],int m2[2][2])
{
	int i,j,s[2][2];
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
		s[i][j]=m1[i][j]+m2[i][j];
	return s;
}
int* diff(int m1[2][2],int m2[2][2])
{
	int i,j,d[2][2];
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
		d[i][j]=m1[i][j]-m2[i][j];
	return d;
}
void main()
{
	int a,i,j,m1[2][2],m2[2][2],r[2][2];
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
		{
			printf("enter element of %d row and %d coloumn of 1st matrix\n",i+1,j+1);
			scanf("%d",&m1[i][j]);
			system("CLS");
		}
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
		{
			printf("enter element of %d row and %d coloumn of 2nd matrix\n",i+1,j+1);
			scanf("%d",&m2[i][j]);
			system("CLS");
		}
		printf("enter 1 for adding two matrix\n");
		printf("enter 2 for substracting two matrix\n");
		printf("enter 3 for multiplying two matrix\n");
		scanf("%d",&a);
		switch(a)
		{
			case 1:r=add(m1,m2);break;
			case 2:r=diff(m1,m2);break;
		}
		printf("1st matrix is:-\n");
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			printf("%d\t",m1[i][j]);
			printf("\n");
		}
		printf("2nd matrix is:-\n");
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			printf("%d\t",m2[i][j]);
			printf("\n");
		}
		printf("required matrix is:-\n");
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			printf("%d\t",r[i][j]);
			printf("\n");
		}
}
