/* Author : Chaitaly Kundu
Date : 1st June, 2021 */


// Topic : Multidimensional array

// Pointer to a 2D array

#include<stdio.h>

int main()
{
    int a[4][3]={{1,2,3},
                {4,5,6},
                {7,8,9},
                {10,11,12}};

    int (*p)[3];
    int i,j, *ptr;
    for(i=0;i<4;i++)
    {
        p = &a[i];
        ptr = (int *) p;

        for(j=0;j<3;j++)
        {
            printf("\t%d",ptr[j]);
        }
        printf("\n");
    }
    return 0;
}