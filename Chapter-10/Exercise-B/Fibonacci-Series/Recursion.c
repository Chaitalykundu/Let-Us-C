/* Author : Chaitaly Kundu
Date : 18th May, 2021 */


/* Write a non-recursive function to find out the fibonacci series of first n numbers */


#include<stdio.h>

void fibonacci(int n, int a, int b)
{
    int c;
    if( n  == 0)
        return;
    else{
        c = a + b;
        printf("%d ", c);
        fibonacci(n-1,b,c);
    }

}

int main()
{
    int n, a=0,b=1;

    printf("Enter the number of terms: ");
    scanf("%d",&n);

    printf("Fibonacci Series: \n %d %d ", a , b);

    fibonacci(n,a,b);

    return 0;
}