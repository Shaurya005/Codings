//Usage of pointer to an array
#include<stdio.h>
int main()
{
	int arr[][2]={1234,56,1212,33,
	        1434,80,1312,78};
	int (*p)[2];
	int i,j,*pint;
	for(i=0;i<4;i++)
	{
		p=&arr[i];
		pint=(int *)p;//extrinsic conversion from (pointer to array) to normal integer pointer
		printf("\n");
		for(j=0;j<2;j++)
		printf("%u ",*(pint+j));
	}
	printf("%u",arr[i]);/*  same as *(arr+i). Here it prints address  */
}	


#include<stdio.h>
int main()
{
	static int a[]={6,1,2,3,4};
	int *p[]={a,a+1,a+2,a+3,a+4};
	printf("%u %u %d\n",p,*p,*(*p));//prints address of p,address of a[0] and then value of a[0]
}
