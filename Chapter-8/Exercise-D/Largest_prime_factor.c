/* Author: Chaitaly Kundu
   Date: 8th May, 2021 */

#include<stdio.h>

int Prime_Factor(int n)
{
    int i, max=0;
    for(i=2;i<=n;i++)
    {
        while(n % i == 0)
        {
            max = i;
            n=n/i;
        }
    }
    return max;
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    printf("%d", Prime_Factor(n));
    return 0;
}