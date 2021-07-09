/* Author : Chaitaly Kundu
Date : 9th Jul, 2021 */

#include<stdio.h>
#include<math.h>

int Divisors(int n)
{
    int c=0;
    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0 && i%3==0)
            c++;
    }
    if(n%3==0)
        c++;
    return c;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    printf("%d",Divisors(n));

    return 0;
}