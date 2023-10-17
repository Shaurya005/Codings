#include<stdio.h>
void move(int n,char source,char dest,char spare);
int main()
{
	int n;
	printf("Enter the number of Rings\n");
	scanf("%d",&n);
	move(n,'A','B','C');
	return 0;
}
void move(int n,char source,char dest,char spare){
	if(n==1)
	printf("\n Move from %c to %c",source,dest);
	else{
		move(n-1,source,spare,dest);
		move(1,source,dest,spare);
		move(n-1,spare,dest,source);
	}
}
/*  If n=4;For every else there will be three move function.
move(4,A,B,C)
	move(3,A,C,B)
        move(2,A,B,C)
            move(1,A,C,B)
            move(1,A,B,C)
            move(1,C,B,A)
        move(1,A,C,B)
        move(2,B,C,A)
            move(1,B,A,C)
            move(1,B,C,A)
            move(1,A,C,B)   
    move(1,A,B,C)
	move(3,C,B,A)
	    move(2,C,A,B)
		    move(1,C,B,A)
			move(1,C,A,B)
			move(1,B,A,C)       
        move(1,C,B,A)
        move(2,A,B,C)
            move(1,A,C,B)
            move(1,A,B,C)
            move(1,C,B,A)
*/
