/* Printing pattern like - 

   1
  23
 345
4567

*/
#include<stdio.h>
#define p printf
#define s scanf
void loop(int i,int n)
{
  int j,k;
  if(i<=n)
  {
  for(j=n-1;j>=i;j--)
  p(" ");
  for(k=i;k<2*i;k++)
  p("%d",k);
  p("\n");
  i++; //If instead we had used loop(i++,n) then no increament of i takes place
  loop(i,n);
  }
}
int main()
{
  int n;
  s("%d",&n);
  loop(1,n);
}
