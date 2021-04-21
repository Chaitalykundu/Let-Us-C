/* Author : Chaitaly Kundu
Date: 21-04-2021 */

/* Write a program to receive an integer and find its octal equivalent*/

#include<stdio.h>
int main()
{
    int n, r;
    printf("Enter the integer number: ");
    scanf("%d",&n);

    while(n>0)
    {
        r = n%8;
        printf("%d",r);
        n = n/8;
    }
}
