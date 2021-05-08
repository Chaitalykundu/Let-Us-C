/* Author: Chaitaly Kundu
   Date: 8th May, 2021 */

#include<stdio.h>

int leapyear(int n)
{
    if(n % 4 == 0)
    {
        if(n % 100 == 0)
        {
            if(n % 400 == 0)
            {
                printf("%d is leap year",n);
            }
            else
                printf("%d is not leap year", n);
        }
        else
            printf("%d is leap year", n);
    }
    else
        printf("%d is not leap year", n);
    return 0;
}

int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);

    leapyear(year);

    return 0;
}