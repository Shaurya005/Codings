#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b;float c,d;
    scanf("%d %d\n",&a,&b);
    scanf("%f %f",&c,&d);//Here .1f can't be used, if written then compiler won't show any compile error instead give irrelevant output.
    printf("%d %d\n",(a+b),(a-b));
    printf("%.1f %.1f",(c+d),(c-d));
    
    return 0;
}

