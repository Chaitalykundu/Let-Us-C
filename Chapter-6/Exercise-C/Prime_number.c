/* Author: Chaitaly Kundu
Date: 22-04-2021 */

/* WAP to print the prime numbers from 1 to 300 */

#include<stdio.h>

/* main function */
int main()
{
    int n, i;

    for(n=2;n<=300;n++)
    {
        int count=0;
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                count++;
                break;
            }
            else{
                continue;
            }
        }
        if(count==0)
            printf("\n%d",n);
    }
    return 0;
}
