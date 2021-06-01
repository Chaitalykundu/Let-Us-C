/* Author : Chaitaly Kundu
Date : 1st June, 2021 */


// Topic : Multidimensional array

// Passing 2D array to a function

#include<stdio.h>

int display(int a[][3], int row, int col)
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int a[4][3]={{1,2,3},
                {4,5,6},
                {7,8,9},
                {10,11,12}};
    int i,j;
    display(a,4,3);
    return 0;
}
