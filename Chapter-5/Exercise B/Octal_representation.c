/* Author : Chaitaly Kundu
Date: 21-04-2021 */

/* Write a program to receive an integer and find its octal equivalent*/

#include<stdio.h>

int reverse(int n)
{
    int digit, r=0;

    while(n>0)
    {
        digit = n%10;
        r = r*10 + digit;
        n = n/10;
    }
    return r;
}

int main()
{
    int n, d, remainder=0, octal;
    printf("Enter the integer number: ");
    scanf("%d",&n);

    while(n>0)
    {
        d = n%8;
        remainder = remainder * 10 + d;
        n = n/8;

    }
    octal = reverse(remainder);
    printf("%d", octal);
}
