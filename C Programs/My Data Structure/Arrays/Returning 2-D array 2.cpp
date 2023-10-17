 #include <stdio.h>
int * retArr()
{
    int i,j,a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    printf("The address of a is %u\n",a);
    int *p=(int *)a;//With one *p only can we use p[n] not more than single square bracket
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
    //printf("%u ",&p[i][j]); It shows error obviously
    printf("%u ",(p+i*3+j));
	printf("%d\n",*(p+i*3+j));}
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
    printf("%d ",*(*(a+i)+j));//Here basically *(a+i) is a[i] which is actually address of ith row and a[i]+j is address of jth element of ith row
	//Here it adds 12 bytes for each i but only 4 bytes for each j.
    //printf("%d\n",*(*(a+i+j)));Here it adds 12 bytes for each i and j.
    }
	printf("\n\nThe address of p is %u\n\n",p);
	return p;
}

int main()
{
    int i,j,*a = retArr();
    int (*p)[3]=(int(*)[3])a;
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
    printf("%u ",&p[i][j]);
    printf("%d ",p[i][j]);
    printf("%d\n",*(*(p+i)+j));//It gives same values as p[i][j].
    //Here some values are printed correctly but some are wrong bcoz they are being deleted from stack as function closes.
    }
	return 0;
}
