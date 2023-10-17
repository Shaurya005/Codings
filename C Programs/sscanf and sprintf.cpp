#include<stdio.h>
#include <string.h>
int main()
{
	char buffer[50];
	int no=97;
	double val=2.34174;
	char name[10]="Shweta";
	sprintf(buffer,"%d %lf %s",no,val,name);
	printf("%s\n",buffer);
	sscanf(buffer,"%4d %2.2lf %s",&no,&val,name);
	printf("%s\n",buffer);
	printf("%d %lf %s\n",no,val,name);
	int dd,mm,yy;
	printf("Enter day,month and year\n");
	scanf("%d%*c%d%*c%d",&dd,&mm,&yy);// use of %*c
	printf("The date is: %d - %d -%d\n",dd,mm,yy);
	
	int day, year;
    char weekday[20], month[20], dtm[100];
    strcpy( dtm, "Saturday March 25 1989" );
    sscanf( dtm, "%s %s %d  %d", weekday, month, &day, &year );
    printf("%s %d, %d = %s\n", month, day, year, weekday );
    //declaring array s 
    char s [] = "3 red balls 2 blue balls";  
    char str [10],str2 [10]; 
    int i;
    // %*s is used to skip a word 
    sscanf (s,"%d %*s %*s %*s %s %s", &i, str, str2);//Here %s is used for storing string thereafter in str and str2
    printf ("%d %s %s \n", i, str, str2); 
	return 0;
}
