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
    int a,b,c;
    float x;

    for(a=1;a<=30;a++)
    {
        for(b=1;b<=30;b++)
        {
            for(c=1;c<=30;c++)
            {
                x = sqrt(pow(a,2) + pow(b,2));
                if(c == x)
                    printf("\n(%d, %d, %d)", a,b,c);
            }
        }
    }
    return 0;
}