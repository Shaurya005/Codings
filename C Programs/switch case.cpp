#include<stdio.h>
int main()
{
	int a=22;
	switch(a)
	{
		case(13>=11):
		    printf("Hola");break;
		    case (18<15&&14>13):
			printf("Yes");break;
			//Here both the case can not be true or false at same time."Duplicate case value" error will be showing
		    //And also inspite of having one case true, it does'nt perform respected action
			default:
			printf("Nope");break;
	}
	switch(a)
	{
		case (2)://variable "a" could'nt be contained within case structure which contains only integer constant
		printf("hiiii");
		break;
		case 12:
		printf("Hello");
			break;
			default://default case can be in between but in that case we must apply brakes after it.
			printf("Hiii");
			case 22:
			printf("Namaste");
	}
}
