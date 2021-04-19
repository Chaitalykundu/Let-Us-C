/* Author : Chaitaly Kundu
Date: 18-04-21 */

/* WAP to receive the temperature and velocity and calculate Wind Chill Factor(wcf) */

#include<stdio.h>
#include<math.h>

int main()
{
    float t,v, wind_chill_factor;

    printf("Enter the temperature: ");
    scanf("%f", &t);

    printf("Enter the velocity: ");
    scanf("%f" ,&v);

    // Formula of Wind chill factor
    wind_chill_factor= 35.74 + 0.6215 * t + ( 0.4275 *t - 35.75) * pow(v,0.16);


    printf("Wind chill factor is %f" , wind_chill_factor);
    return 0;
}
