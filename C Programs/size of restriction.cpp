#include<stdio.h> 
void fun(int arr[])   
{ 
  int i;    
  
  /* sizeof should not be used here to get number  
    of elements in array.
	In C, array parameters are treated as pointers.Array parameters treated as pointers because of efficiency.
	It is inefficient to copy the array data in terms of both memory and time; 
	and most of the times, when we pass an array our intention is to just tell the array we interested in, not to create a copy of the array.*/
  
  int arr_size = sizeof(arr)/sizeof(arr[0]); /* incorrect use of siseof*/
  for (i = 0; i < arr_size; i++)  
  {   
    arr[i] = i;  /*executed only once */
  } 
}
int main() 
{ 
  int i;   
  int arr[4] = {0, 0 ,0, 0}; 
  fun(arr); 
    
  /* use of sizeof is fine here*/
  for(i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) 
    printf(" %d " ,arr[i]); 
  
  getchar();   
  return 0; 
}




// C program to demonstrate difference  
// between strlen() and sizeof() 
#include<stdio.h> 
#include<string.h> 
  
int main() 
{ 
    char str[] = "November"; 
    printf("Length of String is %d\n", strlen(str)); 
    printf("Size of String is %d\n", sizeof(str)); 
} /* 
  Output:
  Length of String is 8
  Size of String is 9 */     
