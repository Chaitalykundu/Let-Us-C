/* Author : Chaitaly Kundu
Date : 26-04-21 */


/* Enter a 5 digit positive integer. Write a non-recursive function to calculate sum of digits */


#include<stdio.h>


int sum(int n)
{
    int s=0, d;
    if(n == 0 || n == 1)
        return n;
    else
    {
        d = n % 10;
        s = d + sum(n/10); // Recursive function
        return s;
    }
}


int main()
{
    int n, sum_of_digits;
    printf("Enter a five digit no: ");
    scanf("%d",&n);

    sum_of_digits = sum(n);
    printf("%d",sum_of_digits);
    return 0;
}
