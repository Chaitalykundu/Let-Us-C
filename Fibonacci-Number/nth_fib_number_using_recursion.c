/* Author : Chaitaly Kundu
Date : 18th May, 2021 */

/* Write a recursive function to find out the nth fibonacci number */

//         Incomplete

#include<stdio.h>

int fibonacci(int n)
{
    if(n <= 1)
        return n;
    else{
        return fibonacci(n-1) +  fibonacci(n-2);
    }
}

int main()
{
    int n, result;

    printf("Enter the term: ");
    scanf("%d",&n);


    result = fibonacci(n);
    printf("%d", result);
    return 0;
}

/* Time Complexity: T(n) = T(n-1) + T(n-2) which is exponential. */