/* Author : Chaitaly Kundu
Date : 18th May, 2021 */


/* Write a program to find out the fibonacci series of first n numbers */


#include<stdio.h>


int main()
{
    int n, i, a =0, b =1, c = a+b;

    printf("Enter the number of terms: ");
    scanf("%d",&n);

    printf("Fibonacci Series: \n %d %d ", a , b);
    for(i=1;i<=n;++i)
    {
        printf("%d ", c);
        a = b;
        b = c;
        c = a +  b;
    }
    return 0;
}