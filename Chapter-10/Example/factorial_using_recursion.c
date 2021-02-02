/* Author : Chaitaly Kundu
Date : 8th Jan, 2021 */


// Topic : Factorial using recursion


#include<stdio.h>
int factorial(int x)
{
    int f;
    if(x==0)
    {
        return 1;
    }
    else
       f = x*factorial(x-1);
    return f;
}
int main()
{
    int n,fact;
    printf("Enter the number: ");
    scanf("%d",&n);
    fact=factorial(n);
    printf("Factorial of %d is %d",n,fact);
    return 0;
}