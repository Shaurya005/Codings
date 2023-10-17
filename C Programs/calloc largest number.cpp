#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, num;
    float *data;
    printf("Enter total number of elements(1 to 100): ");
    scanf("%d", &num);
    // Allocates the memory for 'num' elements.
    data = (float*) calloc(num, sizeof(float));
    if(data == NULL)
    {
        printf("Error!!! memory not allocated.");
        exit(0);
    }
    printf("\n");
    // Stores the number entered by the user.
    for(i = 0; i < num; ++i)
    {
       printf("Enter Number %d: ", i + 1);
       scanf("%f", data + i);
    }
    // Loop to store largest number at address data
    for(i = 1; i < num; ++i)
    {
       // Change < to > if you want to find the smallest number
       if(*data < *(data + i))
           *data = *(data + i);
    }
    printf("Largest element = %.2f", *data);
    return 0;
}




#include <stdio.h>
#include <stdlib.h>
/* If the dynamically allocated memory is insufficient or more than required, you can change the size of previously allocated memory using realloc() function
  Syntax of realloc()
  ptr = realloc(ptr, x); */
int main()
{
    int *ptr, i , n1, n2;
    printf("Enter size of array: ");
    scanf("%d", &n1);

    ptr = (int*) malloc(n1 * sizeof(int));

    printf("Addresses of previously allocated memory: ");
    for(i = 0; i < n1; ++i)
         printf("%u\n",ptr + i);

    printf("\nEnter new size of array: ");
    scanf("%d", &n2);
    ptr = (int*)realloc(ptr, n2 * sizeof(int));

    printf("Addresses of newly allocated memory: ");
    for(i = 0; i < n2; ++i)
         printf("%u\n", ptr + i);
    return 0;
}
