/* Author : Chaitaly Kundu
Date : 18th May, 2021 */


/* Enter a 5 digit positive integer. Write a recursive function to find its prime factors */


#include<stdio.h>

void PrimeFactor(int n, int i)
{
    if(n<=1)
        return;
    else if(n%i == 0)
    {
        printf("%d ",i);
        PrimeFactor(n/i, i);
    }
    else
    {
        PrimeFactor(n, i+1);
    }
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    PrimeFactor(n, 2);

    return 0;
}