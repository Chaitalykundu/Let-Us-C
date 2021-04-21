/* Author : Chaitaly Kundu
Date: 21-04-2021 */

/* Write a program to find the range of set of numbers.

   Range = biggest number - smallest number */

#include<stdio.h>
#include<limits.h>  // It is used to define INT_MAX and INT_MIN. INT_MAX and INT_MIN are the range of integer

int main()
{
    int n, i, small=INT_MAX, big=INT_MIN, range;

    printf("\nEnter the limit of numbers: ");
    scanf("%d", &n);

    printf("\nEnter the %d numbers: ", n);


    while(n>0)
    {
        scanf("%d", &i);

        if(i<small)
        {
            small = i;
        }
        if(i>big)
        {
            big = i;
        }
        n--;
    }

    printf("\nSmallest number is %d and biggest number is %d", small, big);
    range = big - small;
    printf("\n%d", range);

    return 0;
}
