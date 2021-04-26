/* Author : Chaitaly Kundu
Date : 26-04-21 */


/* Enter a 5 digit positive integer. Write a non-recursive function to calculate sum of digits */


#include<stdio.h>
#include<math.h>

int sum(int n)
{
    int s=0, d;
    while(n>0)
    {
        d = n % 10;
        s = s + d ;
        n = n/10;
    }
    return s;
}


int main()
{
    int n, sum_of_digits;
    printf("Enter a five digit no: ");
    scanf("%d",&n);

    sum_of_digits = sum(n);
    printf("%d",sum_of_digits);
    return 0;
}
