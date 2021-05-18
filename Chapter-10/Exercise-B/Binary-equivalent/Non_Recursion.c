/* Author : Chaitaly Kundu
Date : 18th May, 2021 */

/* Write a non-recursive function to find the binary equivalent of a number */


#include<stdio.h>
#include<math.h>

int binary(int n)
{
    int i=0, rem, b=0, power;

    while(n>0)
    {
        rem = n%2;
        power = pow(10,i);
        b = b + (rem * power);
        n=n/2;
        i++;
    }
    printf("%d",b);
}

int main()
{
    int n;

    printf("Enter the number : ");
    scanf("%d",&n);

    binary(n);

    return 0;
}