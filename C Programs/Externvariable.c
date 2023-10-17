#include<stdio.h>
int f(int);
int g(int);
int h(int);
int main()
{
	int x,y,s=2;
	s*=3;
	y=f(s);
	x=g(s);
	printf("%d %d %d\nNew program starts here\n",s,y,x);
		int i,j;
	for(i=1;i<5;i++)
	{
		j=h(i);
		printf("%d\n",j);
	}
	return 0;
}

int t=8; // External Variable

int f(int a)
{
  a+=-5;
  t-=4;
  return (a+t);// Answer - 5
}

int g(int a)
{
  a=1;t+=a;
  return (a+t);// Answer - 6
}

int h(int x)
{
  static int v=1;int b=3;v+=x;
  return(v+x+b);
}
