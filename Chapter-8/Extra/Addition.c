/* Author: Chaitaly Kundu
Date; 09-11-2020 */

/* Write a program and show declaration of function */

#include<stdio.h>


// function prototype declaration
int add(int,int);

// function definition
int add(int a,int b)    // a,b are formal parameters
{
    return a+b;
}

// main function
int main()
{
    int m=5,n=10,sum;  // m,n are actual parameters
    sum=add(m,n);
    printf("Addition is %d",sum);
}
