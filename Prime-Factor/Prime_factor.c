/* Author: Chaitaly Kundu
   Date: 11th May, 2021 */

#include<stdio.h>
int PrimeFactor(int n)
{
    int i;
    for(i=2;i<=n;i++)
    {
        while(n%i==0)
        {   printf("%d ",i);
            n = n/i;
        }
    }
}

int main()
{
    int n, factor;

    printf("Enter a number: ");
    scanf("%d",&n);

    PrimeFactor(n);

    return 0;
}