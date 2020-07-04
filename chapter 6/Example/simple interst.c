/* Calculate simple interest for 3 sets of value of principal, number of years, rate of interest using for loop*/

#include<stdio.h>
int main()
{
    float p,n,r,set, interest;

    for(set=1;set<=3;set++)
    {
        printf("\nEnter the value, year, rate: ");
        scanf("%f %f %f",&p,&n,&r);

        interest = (p*n*r)/100;
        printf("\nSimple Interest is = %f",interest);

    }
}
