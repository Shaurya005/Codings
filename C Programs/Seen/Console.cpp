#include<stdio.h>
int main()
{
	printf("0123456789012345678901234567890123456789\n");
	printf("%10.1f %10.1f %10.1f\n",5.0,13.5,133.9);
	printf("%10.1f %10.1f %-10.1f\n",305.0,1200.9,3005.3);
	char f1[]="SandyHmaraJay";
	char s1[]="Malya";
	char f2[]="AjayKumar";
	char s2[]="Gurubaxani";
	printf("%-20.10s%20s\n",f1,s1);
	printf("%-20s%20s\n",f2,s2);
	printf("You\tmust\tbe\tcrazy\nto\thate\tthis\tbook\n");
	int i=2;float f=2.5367;
	char str[]="Life is like that";
	printf("0123456789012345678901234567890123456789\n");
	printf("%4d\t%3.3f\t%4s\n",i,f,str);
	return 0;
}
