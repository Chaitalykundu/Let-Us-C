/* Author : Chaitaly Kundu
Date : 9th Jul, 2021 */

#include<stdio.h>
int Divisors(int n)
{
    int i;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
            printf("%d ",i);
    }
    printf("%d ",n);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    Divisors(n);

    return 0;
}