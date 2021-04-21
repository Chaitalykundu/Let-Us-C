/* Author : Chaitaly Kundu
Date: 21-04-2021 */

/* Write a program to receive an integer and find its octal equivalent*/

#include<stdio.h>

int main()
{
    int n, d, i=1, octal=0;
    printf("Enter the integer number: ");
    scanf("%d",&n);

    while(n>0)
    {
        d = n%8;
        octal = octal + (d * i);
        n = n/8;
        i *= 10;

    }
    printf("%d", octal);
    return 0;
}

