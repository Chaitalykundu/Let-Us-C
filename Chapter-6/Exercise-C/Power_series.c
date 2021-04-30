/*  Author : Chaitaly Kundu
    Date: 30th April,2021 */

/* When interest compounds q times per year at an annual rate of r% for n years,
the principal p compounds to an amount a as per the following
a = p* ( 1 + r/q)^(n*q)
WAP to read 10 sets of p, r, n, q and calculate the corresponding a's. */

#include<stdio.h>
#include<math.h>

int main()
{
    int i;
    float x, sum=0.0;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    for(i=1;i<=7;i++)
    {
        if(i == 1)
            sum = (x - 1) / x;
        else
        {
            sum = sum + (pow( (x - 1) / x, i) /2);
        }
    }
    printf("\nSum = %f", sum);
    return 0;
}