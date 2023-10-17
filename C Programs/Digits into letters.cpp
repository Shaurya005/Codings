#include<stdio.h>
#include<stdio.h>
#define p printf
#define s scanf
void digit(int *a,int l)
{
	int i;
	for(i=l-1;i>=0;i--)
	{
	if(i==9||i==7||i==5||i==3||i==2||i==0)
	{
	switch(*(a+i))
	{
		case 1:
			p("One ");
			break;
		case 2:
			p("Two ");
			break;
	    case 3:
	    	p("Three ");
	    	break;
	    case 4:
	    	p("Four ");
	    	break;
	    case 5:
			p("Five ");
			break;
		case 6:
			p("Six ");
			break;
	    case 7:
	    	p("Seven ");
	    	break;
	    case 8:
	    	p("Eight ");
	    	break;
	    case 9:
	    	p("Nine ");
	    	break;
        }
    } 
    else{
    	switch(*(a+i))
	{
		case 1:
			i+=1;
			switch(*(a+i))
			{
		case 1:
			p("Eleven ");
			break;
		case 2:
			p("Twelve ");
			break;
	    case 3:
	    	p("Thirteen ");
	    	break;
	    case 4:
	    	p("Fourteen ");
	    	break;
	    case 5:
			p("Fifteen ");
			break;
		case 6:
			p("Sixteen ");
			break;
	    case 7:
	    	p("Seventeen ");
	    	break;
	    case 8:
	    	p("Eighteen ");
	    	break;
	    case 9:
	    	p("Ninteen ");
	    	break;
            }
		case 2:
			p("Twenty ");
			break;
	    case 3:
	    	p("Thirty ");
	    	break;
	    case 4:
	    	p("Fourty ");
	    	break;
	    case 5:
			p("Fifty ");
			break;
		case 6:
			
			p("Sixty ");
			break;
	    case 7:
	    	p("Seventy ");
	    	break;
	    case 8:
	    	p("Eighty ");
	    	break;
	    case 9:
	    	p("Ninty ");
	    	break;
    }
	}
	if(i==9||i==7||i==5||i==3||i==2)
	{
		switch(i)
		{
			case 9:
				p("Billion ");
				break;	
			case 7:
				p("Crores ");
				break;
			case 5:
				p("Lacs ");
				break;
			case 3:
				p("Thousand ");
				break;
			case 2:
				p("Hundred ");
		}
	}
}
}
int main()
{
	int n;
	p("Enter the number upto ten digits: ");
	s("%d",&n);
	int i=0,a[10];
	while(n!=0)
	{
		a[i]=n%10;
		n/=10;
		i++;
	}
	digit(a,i);//Here i be the length of array
}
