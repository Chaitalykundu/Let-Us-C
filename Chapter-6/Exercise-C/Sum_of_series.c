/* Author : Chaitaly Kundu
Date: 22-04-2021 */

/*  WAP to add the first seven terms of the following series

    (1/1!) + (2/2!) + (3/3!) + (4/4!) + (5/5!) + (6/6!) + (7/7!)  */

#include<stdio.h>

int main()
{
    float i, n, fact=1, addition;

    for(i=1;i<=7;i++)
    {
        fact = fact * i;

        n = i/fact;
        addition = addition + n;
    }

    printf("%f",addition);
    return 0;
}
