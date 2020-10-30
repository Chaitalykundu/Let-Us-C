/* Author: Chaitaly Kundu
Date: 30-10-2020 */

/* Calculate simple interest for 3 sets of principal amount, number of years, rate of interest using for loop*/

#include<stdio.h>

/* main function */
int main()
{
    float p,n,r,interest; // p = principal amount, n = years, r = rate of interest
    int set;

    // loop
    for(set=1;set<=3;set++)
    {
        printf("\nEnter the principal amount, year, rate: ");
        scanf("%f %f %f",&p,&n,&r);

        interest = (p*n*r)/100;
        printf("\nSimple Interest is = %f",interest);
    }
    return 0;
}
