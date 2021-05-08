/* Author: Chaitaly Kundu
   Date: 8th May, 2021 */

#include<stdio.h>
int factorial(int n)
{
    int i, fact=1;
    for(i=1;i<=n;i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int n, fact;
    printf("Enter a number: ");
    scanf("%d",&n);
    fact = factorial(n);
    printf("Factorial of %d is %d", n, fact);
    return 0;
}