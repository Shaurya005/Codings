/*The goto statement is a jump statement which is sometimes also referred to as unconditional jump statement.
The goto statement can be used to jump from anywhere to anywhere within a function.
Syntax:

Syntax1      |   Syntax2
----------------------------
goto label;  |    label:  
.            |    .
.            |    .
.            |    .
label:       |    goto label;
In the above syntax, the first line tells the compiler to go to or jump to the statement marked as a label.
Here label is a user-defined identifier which indicates the target statement.
The statement immediately followed after ‘label:’ is the destination statement. 
The ‘label:’ can also appear before the ‘goto label;’ statement as in the above syntax2.*/

// C program to check if a number is even or not using goto statement 
#include <stdio.h> 
void checkEvenOrNot(int num) 
{ 
    if (num % 2 == 0) 
        // jump to even 
        goto even;  
    else
        // jump to odd 
        goto odd;  
  
even: 
    printf("%d is even\n", num);  
    return;
	//If return were not there then it would have executed odd: as well  
odd: 
    printf("%d is odd\n", num); 
} 

// function to print numbers from 1 to 10 
void printNumbers() 
{ 
    int n = 1; 
label: 
    printf("%d ",n); 
    n++; 
    if (n <= 10) 
        goto label; 
} 

int main() { 
    int num = 26; 
    checkEvenOrNot(num); 
    printNumbers(); 
    int number;
    printf("Enter an integer number: ");
    scanf("%d",&number);
    if(number<=0)
        goto end;
    printf("Number is : %d", number);
end:    
    printf("Bye Bye !!!");
	//Here every time it will get printed in spite of number being more than 0 as in case of switch case without break
    int a = 10;
   /* do loop execution */
   LOOP:do {
      if( a == 15) {
         /* skip the iteration */
         a = a + 1;
         goto LOOP;
      }
      printf("value of a: %d\n", a);
      a++;
   }while( a < 20 ); 
return 0;
} 
/*NOTE - Use of goto statement is highly discouraged in any programming language because it makes difficult to trace the control flow of 
program, making the program hard to understand and hard to modify. Any program that uses a goto can be rewritten to avoid them.*/
