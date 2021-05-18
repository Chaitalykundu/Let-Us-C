/* Author : Chaitaly Kundu
Date : 18th May, 2021 */


/* Write a program to find out the fibonacci series of first n numbers */


#include<stdio.h>

int fibonacci(int n)
{
    int i, a =0, b =1, c;
    printf("Fibonacci Series: \n %d %d ", a , b);
    for(i=1;i<=n;++i)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }

}

int main()
{
    int n;

    printf("Enter the number of terms: ");
    scanf("%d",&n);

    fibonacci(n);

    return 0;
}