/* Author : Chaitaly Kundu
Date : 2nd feb, 2021 */


// Topic : Factorial using function


#include<stdio.h>
int factorial(int x)
{
    int i, f=1;
    if(x==0)
    {
        return 1;
    }
    else
    {   for(i=1;i<=x;i++)
        {
            f=f*i;
        }
        return f;
    }
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