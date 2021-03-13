/* Author : Chaitaly Kundu
Date: 13-03-2021 *?

/* Write a program to find the factorial value of any number entered through keyboard */

#include<stdio.h>
int main()
{
    int n,i,factorial=1;
    printf("Enter the number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        factorial = factorial*i;
    }
    printf("%d",factorial);
    return 0;
}
