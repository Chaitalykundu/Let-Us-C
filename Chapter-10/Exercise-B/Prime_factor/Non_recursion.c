/* Author : Chaitaly Kundu
Date : 15th May, 2021 */


/* Enter a 5 digit positive integer. Write a non-recursive function to find its prime factors */


#include<stdio.h>

int PrimeFactor(int n)
{
    int i;

    for(i=2;i<=n;i++)
    {
        while(n%i == 0)
        {
            printf("%d ",i);
            n = n / i;
        }
    }
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    PrimeFactor(n);

    return 0;
}