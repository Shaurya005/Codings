#include <stdio.h>
#include<conio.h>
#define p printf
#define s scanf
int main()
{
	int a[6],b[6],c[6];
	int i,flag=0;
	
	for(i=0;i<6;i++)
	a[i]=b[i]=0;
	
	a[1]=1;a[2]=4;a[5]=-7;
	b[0]=-14;b[1]=10;b[2]=6;b[3]=5;b[4]=3;
	
	p("Polynomial 1 = ");
	for(i=5;i>=0;i--)
	{
		if(a[i]!=0 && i>0){
		p("%d.(x)%d",a[i],i);
		flag=1;}
	if(i>0&&a[i-1]>0&&flag==1)
	p("+ ");
	if(a[i]!=0&&i==0)
	p("%d",a[i]);
    }
    p("\n\n");
    flag=0;
    
    p("Polynomial 2 = ");
	for(i=5;i>=0;i--)
	{
		if(b[i]!=0 && i>0){
		p("%d.(x)%d",b[i],i);
		flag=1;}
	if(i>0&&b[i-1]>0&&flag==1)
	p("+ ");
	if(b[i]!=0&&i==0)
	p("%d",b[i]);
    }
    p("\n\n");
    flag=0;
    
    for(i=0;i<6;i++)
    c[i]=a[i]+b[i];//Polynomial Addition
    
    p("Polynomial 1  + Polynomial 2 = ");
    
    p("Polynomial 1 = ");
	for(i=5;i>=0;i--)
	{
		if(c[i]!=0 && i>0){
		p("%d.(x)%d",c[i],i);
		flag=1;}
	if(i>0&&c[i-1]>0&&flag==1)
	p("+ ");
	if(c[i]!=0&&i==0)
	p("%d",c[i]);
    }
    p("\n\n");
	getch();//In order to check if program reached the last line or not
	
}

