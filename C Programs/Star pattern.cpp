// C program to print hollow pyramid triangle star pattern
#include <stdio.h>
int main()
{
    int i, j, rows;
    /* Input rows to print from user */
    printf("Enter number of rows : ");
    scanf("%d", &rows);
    for(i=1; i<=rows; i++)
    {
        /* Print trailing spaces */
        for(j=i; j<rows; j++)
            printf(" ");
        /* Print hollow pyramid */
        for(j=1; j<=(2*i-1); j++)
        {
            /*
             * Print star for last row (i==rows),
             * first column(j==1) and for
             * last column (j==(2*i-1)).
             */ 
            if(i==rows || j==1 || j==(2*i-1))
                printf("*");
            else
                printf(" ");
        }
        /* Move to next line */
        printf("\n");
    }
/**
 * C program to print hollow right triangle star pattern
 */
    /* Input rows from user */
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for(i=1; i<=rows; i++)
        {
		for(j=1; j<=i; j++)
        { 
            /* 
             * Print star for first column(j==1), 
             * last column(j==i) or last row(i==rows).
             */
            if(j==1 || j==i || i==rows)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    //C program to print x star pattern
 int  N;
    int count;
    printf("Enter N: ");
    scanf("%d", &N);
    count = N * 2 - 1;
    for(i=1; i<=count; i++)
    {
        for(j=1; j<=count; j++)
        {
            if(j==i || (j==count - i + 1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
