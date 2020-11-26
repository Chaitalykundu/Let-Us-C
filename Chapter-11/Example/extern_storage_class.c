/* Author: Chaitaly Kundu
Date: 26 nov, 2020 */


#include<stdio.h>
int i; // Global variable
void increment();
void decrement();

int main()
{
    increment();
    increment();
    decrement();
    decrement();
    return 0;
}

void increment()
{
    i=i+1;
    printf("\n%d",i);
}

void decrement()
{
    i=i-1;
    printf("\n%d",i);
}
/* O/P: 1
        2
        1
        0 */
