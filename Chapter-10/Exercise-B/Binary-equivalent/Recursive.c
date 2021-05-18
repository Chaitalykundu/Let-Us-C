/* Author : Chaitaly Kundu
Date : 18th May, 2021 */

/* Write a recursive function to find the binary equivalent of a number */


#include<stdio.h>
#include<math.h>

int binary(int n)
{
    int i=0, rem, b=0, power;

    if(n <= 1)
        return n;
    else
    {
        rem = n%2;
        return (rem + 10 * binary(n/2));
    }
}

int main()
{
    int n, result;

    printf("Enter the number : ");
    scanf("%d",&n);

    result = binary(n);
    printf("%d",result);

    return 0;
}