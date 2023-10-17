#include <stdio.h>
#include "Day_Predictor.h"
int main()
{
	int dd,mm,yy;
	p("Enter the date in standard format\n");
	s("%d%*c%d%*c%d",&dd,&mm,&yy);
	int odd=predict(dd,mm,yy-1);
	switch(odd)
	{
		case 1:
			p("It\'s Monday ");
			break;
		case 2:
			p("It\'s Tuesday ");
			break;
		case 3:
			p("It\'s Wednessday ");
			break;
		case 4:
			p("It\'s Thursday ");
			break;
		case 5:
			p("It\'s Friday ");
			break;
		case 6:
			p("It\'s Saturday ");
			break;
		case 0:
			p("It\'s Sunday ");
			break;
	}
}
