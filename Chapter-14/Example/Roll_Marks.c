/* Author : Chaitaly Kundu
Date : 7th feb, 2021 */


// Topic : Multidimensional array

// Print roll no and marks using 2D array

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[4][2];
    int i,j;
    
    for(i=0;i<4;i++)
    {
    
        printf("Enter roll no. and marks: ");
        scanf("%d %d", &a[i][0], &a[i][1]);
    }
    printf("Roll no.\tMarks\n");
    for(i=0;i<4;i++)
    {
        printf("%d\t\t%d\n", a[i][0], a[i][1]);
    }
    return 0;
}