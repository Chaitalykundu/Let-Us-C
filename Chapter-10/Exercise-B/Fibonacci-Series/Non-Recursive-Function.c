/* Author : Chaitaly Kundu
Date : 18th May, 2021 */

/* Write a recursive function to find out the fibonacci series of first n number */


#include<stdio.h>

int fibonacci(int n, int a, int b)
{
    int c, i;
    for(i=1;i<=n;i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
}

int main()
{
    int n, a=0, b=1;

    printf("Enter the number of terms: ");
    scanf("%d",&n);

    printf("Fibonacci Series: \n %d %d ", a , b);

    fibonacci(n,a,b);

    return 0;
}