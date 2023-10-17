#include <stdio.h>
int** retArr()
{
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    printf("%u\n",a);//Data type of a is int(*)[3] i.e. a means a[0] (Address of array of 3 integers basically 0th row address here)
    printf("%u\n",a[1]);//we know a[1] is an address of 1th row here.It is same as a+1.
    printf("%u\n",&a[1]);//Same as above, no effect on adding & here
    printf("%u\n",a+1);//12 bytes for a as 3 elements in one row
	printf("%u\n",a+2);
	printf("Size of a is %d\n",sizeof(a));//36 is answer here
    printf("Size of a[1] is %d\n",sizeof(a[1]));//12 is answer here
    printf("Size of an integer pointer is %d\n",sizeof((int*)a));
    return (int**)a;//Here in cpp extension it'll show error if type casting is not done but in c it won't show error but warning
}
int main()
{
	int i,j;
    int** a= retArr();
    printf("\n\n\n%u\n",&a[1]);//Same as a+1
    printf("%u\n",a+1);//8 bytes for a
	printf("%u\n",a+2);
	printf("\n\n%u\n",&a[1][0]);//Same as a+1
	printf("\n\n%u\n",&a[0][1]);//adding 16 for each subscript in second bracket,i.e, it correspond to adress a+16
	printf("\n\n%u\n",&a[1][1]);//So it correspond to address of a+24
	
	int *p=(int*)a;//Extrinsic conversion from (pointer to a pointer of int) to pointer of an integer  
	printf("Size of an integer pointer is %d\n",sizeof(p));//8
	printf("Size of pointer to integer pointer is %d\n",sizeof(a));//8
	printf("Size of value at pointer to integer pointer is %d\n",sizeof(*a));//8
	printf("Size of an integer is %d\n",sizeof(**a));//4
	//Actually the size of integer pointer is 8 bytes but on inceamenting it would increase by 4 bytes.
	printf("%u\n",p);
	printf("%u\n",&p[1]);//Same as p+1
    printf("%u\n",p+1);//4 bytes inceament
	printf("%u\n",p+2);
    
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
    printf("%d\n",*(a+i+j));//Right values at all except *(a+2+2)
    printf("Break\n");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
    printf("%d\n",*(p+i*3+j));//Here the values got lost bcoz of deletion of elements from stack once out of function where created.
    return 0;
}
