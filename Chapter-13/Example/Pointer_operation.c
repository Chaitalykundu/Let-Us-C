/* Author : Chaitaly Kundu
Date : 29th April, 2021 */


// Topic : Operations on pointer

#include<stdio.h>

int main()
{
    int a[]= {11, 22, 33, 44, 55, 66, 77, 88, 99};
    int i=4, *j, *k, *x, *y;

    // Addition of Pointer and a number
    j = &i;
    printf("\nBefore Addition %d", j);  // o/p: (Address)
    j = j + 9;
    printf("\nAfter Addition %d", j);  // o/p: (Address)

    // Subtraction of Pointer and a number
    k = &i;
    printf("\n\nBefore Subtraction %d", k); // o/p: (Address)
    k = k - 3;
    printf("\nAfter Subtraction %d", k);  // o/p: (Address)

    // Subtraction of two pointer
    x = &a[1];
    y = &a[6];
    printf("\n\nSubtraction of two pointer = %d ", y-x); // o/p: 5

    return 0;
}
