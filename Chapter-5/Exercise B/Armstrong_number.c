/* Author : Chaitaly Kundu
Date: 21-04-2021 */

/*  WAP to print all the armstrong numbers between 1 and 500 */

#include<stdio.h>
#include<math.h>

int main()
{
    int n=001, x, digit1, digit2, digit3;

    while(n<=500)
    {
        digit1 = (n/100);
        digit2 = (n%100) / 10;
        digit3 = n%10;

        x = pow(digit1,3) + pow(digit2,3) + pow(digit3,3);

        if(n==x)
            printf("\n%d",n);
            n++;
    }
    return 0;
}

