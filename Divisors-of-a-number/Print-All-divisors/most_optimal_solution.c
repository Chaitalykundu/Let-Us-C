/* Author : Chaitaly Kundu
Date : 9th Jul, 2021 */

#include<stdio.h>
#include<math.h>

int Divisors(int n)
{
    int i;
    for(i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(n/i==i)
                printf("%d ",i);
            else
                printf("%d %d ", i, n/i);
        }
    }
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    Divisors(n);

    return 0;
}