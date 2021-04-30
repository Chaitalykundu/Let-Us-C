/*  Author : Chaitaly Kundu
    Date: 30th April, 2021 */

/* Population of a town today is 100000. The population has increased steadily at the rate of 10% per year for last 10 years.
   WAP to determine the population at the end of each year in the last decade */

#include<stdio.h>
#include<math.h>
int main()
{
    float population = 100000;
    int rate, year;
    for(year=1;year<=10;year++)
    {
        population = population + (population * 10 / 100);
        printf("\n Year = %d and Population = %.0f", year, population);
    }
    return 0;
}