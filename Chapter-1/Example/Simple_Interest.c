#include<stdio.h>
/* main function */
int main()
{
    float simple_interest, p, n, r; /* p= principle amount, n= time , r= rate of interest */
    printf("Enter principle amount, time and rate of interest: ");
    scanf("%f %f %f",&p,&n,&r);

    /* Formula of Simple Interest */
    simple_interest= (p*n*r)/100;
    printf("Simple Interest is %f", simple_interest);
    return 0;
}
