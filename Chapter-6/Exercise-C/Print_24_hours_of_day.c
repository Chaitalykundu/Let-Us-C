
/* Author: Chaitaly Kundu
   Date: 8th May, 2021 */

// WAP to print 24 hours of day with suitable suffixes like AM, PM, Noon , Midnight


#include<stdio.h>
int main()
{
    int hour;

    for(hour=0;hour<=23;hour++)
    {
        if(hour == 0)
        {
            printf("12 Midnight\n");
            continue;
        }

        if(hour<12)
           printf("%d AM\n",hour);

        if(hour == 12)
           printf("12 Noon\n");

        if(hour > 12)
            printf("%d PM\n", hour%12);
    }
    return 0;
}