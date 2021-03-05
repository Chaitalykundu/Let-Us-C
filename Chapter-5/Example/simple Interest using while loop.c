/* Calculate simple interest for 3 sets of value of principal, number of years, rate of interest using while loop*/

#include<stdio.h>
int main()
{
    int set=1;
    float p,n,r, interest;

    while(set<=3)
    {
        printf("\nEnter the value, year, rate: ");
        scanf("%f %f %f",&p,&n,&r);

        interest = (p*n*r)/100;
        printf("\nSimple Interest is = %f",interest);

        set++;
    }
}
