/* Author : Chaitaly Kundu
Date : 26-04-21 */


/* Enter a 5 digit positive integer. Write a to calculate sum of digits
    Using ASCII value */

                    // INCOMPLETE


#include<stdio.h>

int main()
{
    int a,b,c,d,e;
    printf("Enter the 5 digits of a number: ");
    scanf("%c%c%c%c%c", &a,&b,&c,&d,&e);

    // number = (a-48) + (b-48) + (c-48) + (d-48) + (e-48);
    printf("%d\n",(a-48)+(b-48)+(c-48)+(d-48)+(e-48));
}
