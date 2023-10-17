#include<stdio.h>
#define p printf
#define s scanf
void print_threeDim(int a[][3][4]);
int main()
{
	int a[2][3][4];
	int count=0;
	for(int i=0;i<2;i++)
	for(int j=0;j<3;j++)
	for(int k=0;k<4;k++)
	{
		a[i][j][k]=count;
		count++;
	}
	print_threeDim(a);
}
	void print_oneDim(int a[])
	{
		for(int i=0;i<4;i++)
		printf("%d ",a[i]);
		printf("\n");
	}
	void print_twoDim(int a[][4])
	{
		for(int j=0;j<3;j++)
		print_oneDim(a[j]);//Passing address of 0th,1st,2nd column(contains 4 elements each) i.e. 1-D Array of dimension 4
		printf("\n");
	}
	void print_threeDim(int a[][3][4])
	{
		p("Every two dimensional matrix\n");
		for(int j=0;j<2;j++)
		print_twoDim(a[j]);//Passing address of 0th,1st 2-D Matrix of dimension 3,4
		printf("\n");
	}

