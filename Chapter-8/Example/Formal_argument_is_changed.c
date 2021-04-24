/* Author: Chaitaly Kundu
Date; 24-04-21 */

/* Formal argument is changed in the called function (call by value) */

#include<stdio.h>


int num(int b)
{
    b=60;
    printf("%d\n", b);
}

int main()
{
    int a=30;
    num(a);
    printf("%d\n", a);
    return 0;
}

