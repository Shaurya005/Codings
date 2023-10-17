// C program to demonstrate typedef 
#include <stdio.h> 

// After this line BYTE can be used in place of unsigned char 
typedef unsigned char BYTE; 
typedef char* ptr; 
#define PTR char*  
int main() 
{ 
    BYTE b1, b2; 
    b1 = 'c'; 
    printf(" %c \n", b1); 
    ptr a, b, c; 
    PTR x, y, z; 
    printf("sizeof a:%u\n" ,sizeof(a) ); 
    printf("sizeof b:%u\n" ,sizeof(b) ); 
    printf("sizeof c:%u\n" ,sizeof(c) ); 
    printf("sizeof x:%u\n" ,sizeof(x) ); 
    printf("sizeof y:%u\n" ,sizeof(y) ); 
    printf("sizeof z:%u\n" ,sizeof(z) ); 
    return 0; 
} 
    
/*typedef is different from #define among the following aspects

typedef is limited to giving symbolic names to types only, where as #define can be used to define alias for values as well, e.g., you can define 1 as ONE, 3.14 as PI, etc.

typedef interpretation is performed by the compiler where #define statements are performed by preprocessor.

#define should not be terminated with semicolon, but typedef should be terminated with semicolon.

#define will just copy-paste the definition values at the point of use, while typedef is actual definition of a new type.

typedef follows the scope rule which means if a new type is defined in a scope (inside a function), then the new type name will only be visible till the scope is there. 
In case of #define, when preprocessor encounters #define, it replaces all the occurrences, after that (No scope rule is followed).*/
