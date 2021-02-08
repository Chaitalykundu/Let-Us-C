/* Author : Chaitaly Kundu
Date : 7th feb, 2021 */


// Topic : Multidimensional array

// Print the elements of 2D array

#include<stdio.h>

int main()
{
    int a[2][5]={1,2,3,4,5,6,7,8,9,10};
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("\t%d",a[i][j]);
        }
    }
    return 0;
}