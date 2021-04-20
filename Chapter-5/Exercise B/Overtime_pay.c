/* Author : Chaitaly Kundu
Date: 21-04-2021 */

/*  WAP to calculate overtime pay of 10 employees.
    overtime is paid at the rate of rs 12.00 per hour for every hour worked above 40 hrs. */


#include<stdio.h>

int main()
{
    int employee=1, rate, workhour, overtime;
    while(employee<= 10)
    {
        printf("\nEnter the workhour: ");;
        scanf("%d", &workhour);
        if(workhour>40)
        {
            overtime = workhour - 40;
            rate = overtime * 12;
            employee++;
            printf("\nThe overtime pay of the employee is %d", rate);
        }
        printf("\n");
    }
    return 0;
}
