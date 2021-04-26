/* Author : Chaitaly Kundu
Date : 26-04-21 */


/* Calculate the sum of n natural number */


#include<stdio.h>

int sum(int n)
{
    int s;
    s = n * (n+1) /2;
    return s;
}

int main()
{
    int n, sum_of_natural_number;
    printf("Enter the no of terms to be summed: ");
    scanf("%d",&n);

    sum_of_natural_number = sum(n);
    printf("Sum of %d number is %d", n, sum_of_natural_number);

    return 0;
}
