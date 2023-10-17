#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char c,st[24],s[356];
scanf("%c\n%s\n",&c,&st);//Here it would take string only till space isn't entered
scanf("%[^\n]%*c",&s);//it can be also ("%[^\n]s",&s).....Here it would take whole string untill enter isn't entered
printf("%c\n%s\n%s",c,st,s);


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
