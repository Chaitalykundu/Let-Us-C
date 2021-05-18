/* Author : Chaitaly Kundu
Date : 18th May, 2021 */

/* Write a recursive function to find out the nth fibonacci number */

        //         Incomplete


#include<stdio.h>

long long int fib(long long int n)
{
    long long int a = 0, b = 1, c, i;
    if( n == 0)
        return a;
    for(i = 2; i <= n; i++)
    {
       c = a + b;
       a = b;
       b = c;
    }
    return a;
}


int main()
{
    long long int n, result;

    printf("Enter the term: ");
    scanf("%lld",&n);


    result = fib(n);
    printf("%lld", result);
}