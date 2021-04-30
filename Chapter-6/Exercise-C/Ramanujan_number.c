/*  Author : Chaitaly Kundu
    Date: 30th April, 2021 */

/* Ramanujan Number is the smallest number that can be expressed as sum of two cubes in two different ways.
   WAP to print all such numbers up to a reasonable limit */

                                    // INCOMPLETE
#include<stdio.h>
#include<math.h>

int main()
{
    int i, j, number = 30000, sum_of_cubes;

    for(i=1; i<=number; i++)
    {
        for(j=1;j<=number; j++)
        {
            sum_of_cubes = pow(i,3) + pow(j,3);
            if(number = sum_of_cubes)
                printf("\n%d", number);
        }
    }
}