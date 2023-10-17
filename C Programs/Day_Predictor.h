#define p printf
#define s scanf
int predict(int dd,int mm,int yy)
{
	int i;
	int n=yy%400;
	int odd=((n/100)*5)%7;
	n=n%100;
	odd=(odd+n+(n/4))%7;
	for( i=1;i<mm;i++)
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10)
		odd=odd+3;
		else if(i==2)
		{
			if(((yy+1)%4)==0)
			odd+=1;
		}
		else if(i==4||i==6||i==9||i==11)
		odd+=2;
	}
	odd=odd+(dd%7);
	return (odd%7);
}
