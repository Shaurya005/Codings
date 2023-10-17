#include <stdio.h> 
int main() 
{ 
	static int i = 5; 
	if (--i){ 
		printf("%d ", i); 
		main(10); 
		//Here it runs succesfully as any number of arguments can be passed in C 
		//But if it is written main(void) then it shows [Error]too many arguments to main.
	} 
} 


