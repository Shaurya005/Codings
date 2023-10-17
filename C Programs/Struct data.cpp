#include<stdio.h>
	struct data{
		int roll;
		char n[35],dep[15],c[25];
		int year;
		
	};
void print(struct data *d,int n)
{
	int i;
for(i=0;i<=3;i++)
{
	if(n==d[i].roll)
	printf("%d %s %s %s %d",d[i].roll,d[i].n,d[i].dep,d[i].c,d[i].year);//If only using d then -> will be used as then it would be address
	}	
}
int main()
{

	struct data b[10]={{
	1,"shaurya","ECE","B.tech",2018
	},{2,"yash","EE","B.tech",2018},{3,"tanishq","EE","B.tech",2018},{4,"aditya","civil","B.tech",2018}};
	printf("Enter roll no. of student\n");int n;
	scanf("%d",&n);
	print(b,n);//For passing particular element, b[2] like can be used 
}




#include<stdio.h>
#include<string.h>
struct employee{
	int code;
	char n[50];
	char date[15];
}e[10];

void data(struct employee *a,char yr[5],char mt[3])
{
int i;
for(i=0;i<10;i++)
	if((yr-(a[i].date).substr(6,9)>3) || (yr-a[i].date.substr(6,9)==3 && mt-a[i].date.substr(3,4)>0))
	printf("\n%d %s %s",a[i].code,a[i].n,a[i].date);	
}
int main(){
	printf("Enter code,name and date of joining in dd/mm/year format\n");
	int i;
	for(i=0;i<=9;i++)
	{
	    scanf("%d",&e[i].code);
		gets(e[i].n);
		gets(e[i].date);//Other method can include inputting date, month and year in int separately
	}
	char cu[15];
	printf("\nEnter current date in dd/mm/year format \n");
	scanf("%[^\n]s",&cu);//Other method can include inputting date, month and year in int separately
	data(e,cu.substr(6,9),cu.substr(3,4));
}
