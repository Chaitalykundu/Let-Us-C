/* Author : Chaitaly Kundu
Date: 30th April,2021 */

/* When interest compounds q times per year at an annual rate of r% for n years,
the principal p compounds to an amount a as per the following
a = p* ( 1 + r/q)^(n*q)
WAP to read 10 sets of p, r, n, q and calculate the corresponding a's. */

#include<stdio.h>
#include<math.h>

int main()
{
    float i, a, p, q, r, n, x, y;
    for(i = 1; i<=10; i++)
    {
        printf("\nEnter the value of p, q, r, n: ");
        scanf("\n%f %f %f %f", &p, &q, &r, &n );

        x = ( 1 + r/q);
        y = n*q;
        a = p * pow(x,y);
        printf("\nAmount is %f", a);
    }
    return 0;
}