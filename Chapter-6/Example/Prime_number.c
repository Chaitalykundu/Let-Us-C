/* Author: Chaitaly Kundu
Date: 21-04-2021 */

/* WAP to check if the number is prime or not */

#include<stdio.h>

/* main function */
int main()
{
    int n, i, count=0;

    printf("Enter the number : ");
    scanf("%d",&n);

    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            count++;
            break;
        }
    }

    if(n==1)
        printf("Neither prime nor composite");
    else
    {
        if(count==0)
            printf("The number is prime");
        else
            printf("The number is not prime");
    }
    return 0;
}
