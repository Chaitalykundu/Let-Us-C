/*  Author : Chaitaly Kundu
    Date: 6th May, 2021 */

/* WAP to find out the smallest number in an array using pointer */

#include<stdio.h>
#define N 5

int main()
{
    int i, *small;
    int a[] = {6,5,8,2,4};

    small = &a[0];

    for(i = 1; i < N; i++)
    {
        if( *(a + i) < *small)
            *small = *(a + i);
    }

    printf("Smallest Element In The Array: %d\n", *small);

    return 0;
}