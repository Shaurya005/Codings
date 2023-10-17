#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr,i,n, sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    ptr = (int *) calloc(n, sizeof(int));
    if(ptr == NULL)
    {
        printf("Error! memory not allocated.");
        exit(0);
    }
    printf("Enter elements: ");
    for(i = 0; i < n; ++i)
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }
    printf("Sum = %d", sum);
    free(ptr);
       
    int*n1;int num1;//Here it works also without space in int*n1  
	printf("Enter the number of values you want to get printed\n");
	scanf("%d",&num1);
	n1=(int *) calloc (num1 , sizeof(int));
	for(i=0;i<num1;i++)
	scanf("%d",(n+i));
	
/* 
malloc syntax: ptr = (data-type*) malloc(byte-size)
calloc syntax: ptr = (data-type*) calloc(byte-size)
The malloc() function allocates a single block of memory. Whereas, calloc() allocates multiple blocks of memory and initializes them to zero.
   
Dynamically allocated memory created with either calloc() or malloc() doesn't get freed on their own. You must explicitly use free() to release the space.
Syntax of free(): free(ptr);
*/
    int n, i, *ptr, sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    ptr = (int*) malloc(n * sizeof(int));
    if(ptr == NULL)                     
    {
        printf("Error! memory not allocated.");
        exit(0);
    }
    printf("Enter elements: ");
    for(i = 0; i < n; ++i)
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }
    printf("Sum = %d", sum);
    free(ptr);
    return 0;
}
}
