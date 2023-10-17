#include<stdio.h>
int calc_rec(int nu, int level)
{
   int tmp;
   if (level == 1) return (nu-1);
   tmp = nu % level;
   return calc_rec(nu - (tmp ? tmp : level), level-1);
}
int calc(int n)
{
   if (n == 1) return 1;
   return calc_rec(n*n, n-1);
}

int main(){
	
	scanf("%d",&n);
	for(int i=)
	printf("%d",calc(4));
}
