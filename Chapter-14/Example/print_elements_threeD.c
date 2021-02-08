/* Author : Chaitaly Kundu
Date : 8th feb, 2021 */


// Topic : Multidimensional array

// Print the elements of 3D array

#include<stdio.h>

int main()
{
    int a[2][2][3]={{{1,2,3},{4,5,6}},{{7,8,9},{10,11,12}}};
    int x,y,z;
    for(x=0;x<2;x++)
    {
        for(y=0;y<2;y++)
        {
            for(z=0;z<3;z++)
            {
                printf("\t%d",a[x][y][z]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}