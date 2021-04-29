/* Author: CHaitaly Kundu
Date: 29th April, 2021 */

// Topic: Multi-dimensional Array
/* Find the output */

#include<stdio.h>

int main()
{
    int n[3][3]={ 2, 4, 3,
                  6, 8, 5,
                  3, 5, 1};
    int i, *ptr;
    ptr = &n[0][0];
    for(i=0;i<=8;i++)
        printf("%d\n", *(ptr+1));
    return 0;
}

/* Output:
            4
            4
            4
            4
            4
            4
            4
            4
            4 */