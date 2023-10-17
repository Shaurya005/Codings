#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int j,i,and,or,xor,and1,or1,xor1;
    for(i=1;i<n;i++)
    {
        if((i&(i+1))<k)
        and=i&(i+1);
        if((i|(i+1))<k)
        or=i|(i+1);
        if((i^(i+1))<k)
        xor=i^(i+1);
        for(j=i+2;j<=n;j++)
        {
            if(((j&i)>and)&&((j%i)<k))
            and=j&i;
            if(((j|i)>or)&&((j|i)<k))
            or=j|i;
            if((j^i)>xor&&(j^i)<k)
            xor=j^i;
        }
        if(i==1)
        {
        and1=and;
        or1=or;
        xor1=xor;
        }
        else
        {
            if((and>and1)&&(and<k))
            and1=and;
            if((or>or1)&&(or<k))
            or1=or;
            if((xor>xor1)&&(xor<k))
            xor1=xor;
        }
    }
    printf("%d\n",and1);
    if(or1<k)
    printf("%d\n",or1);
    else
    printf("%d\n",2);
    printf("%d\n",xor1);
  //Write your code here.
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

