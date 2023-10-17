/*
Syntax:
data_type (*var_name)[size_of_array];
Example:
int (*ptr)[10];

Here ptr is pointer that can point to an array of 10 integers. Since subscript have higher precedence than indirection, 
it is necessary to enclose the indirection operator and pointer name inside parentheses. 
Here the type of ptr is �pointer to an array of 10 integers�.
Note : The pointer that points to the 0th element of array and the pointer that points to the whole array are totally different. 
The following program shows this:
*/ 
#include<stdio.h> 
int main() 
{  
    int *p;  
    // Pointer to an array of 5 integers 
    int (*ptr)[5];  
    int arr[5]; 
    // Points to 0th element of the arr. 
    p = arr; 
    // Points to the whole array arr. 
    ptr = &arr;  
    printf("p = %p, ptr = %p\n", p, ptr);     
    p++;  
    ptr++;
    printf("p = %p, ptr = %p\n", p, ptr);
    return 0; 
} 
/*Output:
The base type of p is int while base type of ptr is �an array of 5 integers�.
We know that the pointer arithmetic is performed relative to the base size, so if we write ptr++, then the pointer ptr will be shifted forward by 20 bytes.
The following figure shows the pointer p and ptr. Darker arrow denotes pointer to an array.
*/

//On dereferencing a pointer expression we get a value pointed to by that pointer expression. 
//Pointer to an array points to an array, so on dereferencing it, we should get the array, and the name of array denotes the base address. 
//So whenever a pointer to an array is dereferenced, we get the base address of the array to which it points.

 
#include<stdio.h> 
int main() 
{ 
    int arr[] = { 3, 5, 6, 7, 9 }; 
    int *p = arr; 
    int (*ptr)[5] = &arr; 
      
    printf("p = %p, ptr = %p\n", p, ptr); 
    printf("*p = %d, *ptr = %p\n", *p, *ptr); 
      
    printf("sizeof(p) = %lu, sizeof(*p) = %lu\n",sizeof(p), sizeof(*p)); 
    printf("sizeof(ptr) = %lu, sizeof(*ptr) = %lu\n",sizeof(ptr), sizeof(*ptr)); 
    return 0; 
} 
/*Output:
p = 0x7ffde1ee5010, ptr = 0x7ffde1ee5010
*p = 3, *ptr = 0x7ffde1ee5010
sizeof(p) = 8, sizeof(*p) = 4
sizeof(ptr) = 8, sizeof(*ptr) = 20
*/
