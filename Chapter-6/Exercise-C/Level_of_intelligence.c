/* Author : Chaitaly Kundu
Date: 30th April,2021 */

/*  level of intelligence => i = 2 + (y+ 0.5 *x)
    WAP that will produce a table of values of i, y, x, where y varies from 1 to 6.
    For each value of y, x varies from 5.5 to 12.5 in steps of 0.5*/

#include<stdio.h>

int main()
{
    float i, x, y;;
    for(y=1;y<=6;y++)
    {
        for(x= 5.5; x<=12.5; x +=0.5)
        {
            i = 2 + (y+ 0.5 *x);
            printf("y = %f\t x = %f\t i = %f\t\n", y,x,i);
           x = x +0.5;
        }
    }
    return 0;
}