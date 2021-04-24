/* Author : Chaitaly Kundu
Purpose : Learn C completely from Let us C
Date : 8th Jan, 2021 */


// Topic : Pointer (Call by Reference)


#include<stdio.h>
int swap(int * , int *);

int main()
{
    int a=5,b=10;
    printf("\nBefore swapping -->  a = %d and b = %d", a,b);
    swap(&a,&b);
    printf("\nAfter swapping -->  a = %d and b = %d", a,b);
    return 0;
}

int swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}

