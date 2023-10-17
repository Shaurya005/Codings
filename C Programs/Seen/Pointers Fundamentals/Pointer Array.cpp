#include<stdio.h>
void printArray(int *x[]);
void printArray_usingPtr(int *x[]);
int *x[6];
int main()
{
	int i1=5,i2=2,i3=54,i4=12,i5=76,i6=91;
	x[0]=&i1;x[1]=&i2;
	x[2]=&i3;x[3]=&i4;
    x[4]=&i5;x[5]=&i6;
	printf("%u\n",&x[0]);
	printf("%u\n",&x[1]);
	printArray(x);
	//Actually here x is base address of pointer array i.e. address of x[0]
	printArray_usingPtr(x);	
}
void printArray(int *x[])
{
	printf("The Address is   Address in array is   Value is\n");
	for(int j=0;j<6;j++)
	{
		printf("%16u %16u %d\n",x[j],x[j],x[j]);
		//Prints addresses of integers stored i.e. values stored in x[0],x[1],....
	}
}
void printArray_usingPtr(int *x[])
{
	int j=0;
	printf("On using the pointer\n");
	for(int j=0;j<6;j++)
	{
		printf("The value of elements %d %16u %16u\n",**x,*x,x);
		//Prints value of integers, their corresponding address and address of the x[0],x[1],.... 
		x++;
	}
}
