/* Author: Chaitaly Kundu
   Date: 8th May, 2021 */

#include<stdio.h>

int Prime_Factor(int n)
{
    int i;
    for(i=2;i<=n;i++)
    {
        while(n % i == 0)
        {   printf(" %d",i);
            n=n/i;
        }
    }
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
y
    Prime_Factor(n);
    return 0;
}