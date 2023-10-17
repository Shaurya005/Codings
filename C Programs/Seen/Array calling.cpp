#include<stdio.h>
int accumulate(int n, int *array)
{
    int i;
    int sum = 0;
    for (i = 0; i < n; ++i) {
        sum += array[i];
    }
    return sum;
}
//This can also be written to this (which means the very same thing):
int accumulate1(int n, int array[])
{
    int i;
    int sum = 0;
    for (i = 0; i < n; ++i) {
        sum += array[i];
    }
    return sum;
}
//I can also write it like this:
int accumulate2(int n, int (*array))
{
    int i;
    int sum = 0;
    for (i = 0; i < n; ++i) {
        sum += (*array);
    }
    return sum;
}
