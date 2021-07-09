/* Author : Chaitaly Kundu
Date : 9th Jul, 2021 */

#include<stdio.h>
#include<math.h>

int Divisors(int n)
{
    int c=0;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(n/i!=i)
            {
                if(i%3==0 && ((n/i)%3==0))
                    c=c+2;
                else if(i%3==0 || ((n/i)%3==0))
                    c++;
            }
            else{
                if(i%3==0 )
                    c++;
            }
        }
    }
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