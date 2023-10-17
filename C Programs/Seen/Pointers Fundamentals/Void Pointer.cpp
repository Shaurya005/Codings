//Generic pointer is any pointer which could point to any variable of any types- In C it's the void pointrer.
//A void pointer could be casted to or casted from any time
/*
   Adantage of void pointers:
   1)malloc() and calloc() return void* type and this allows these functions to be used to allocate memory of any data type
     just because of void*
   2)void pointer in c are used to implement generic  functions in c. For example compare function which is used in qsort().
*/
#include<stdio.h>
int main()
{
int a=10;char b='x';
void *p=&b;
p=&a;
printf("%d",*(int*)p);//It runs fine as it is converted into int* type
//printf("%d",*p);//[Error] 'void*' is not a pointer-to-object type 
//The C Standard doesn't allow pointer arithmetic with void pointer. However, in GNU C it is allowed by considering the size of void is 1.
int ar[2]={1,2};
void *ptr=&a;
ptr=ptr+sizeof(int);//It might not work in other compilers as here also warning is giving
printf("\n%d",*(int*)ptr);
} 
