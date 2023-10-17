#include<stdio.h>
int main()
{
	int x[3][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14}},*n=&x;
		printf("%d\n",*(*(x+2)+1));
		printf("%d\n",*(*x+2)+5);
		printf("%d\n",*(*(x+1)));
		printf("%d\n",*(*(x)+2)+1);
		printf("%d\n",*(*(x+1)+3));
		printf("%d\n",*n);
		printf("%d\n",*(n+2));
		printf("%d\n",*(n+3)+1);
		printf("%d\n",*(n+5)+1);
		printf("%d\n",++*n);
}
