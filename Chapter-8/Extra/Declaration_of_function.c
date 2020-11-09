/* Author: Chaitaly Kundu
Date; 09-11-2020 */

/* Write a program and show declaration of function */

#include<stdio.h>


// function prototype declaration
char fun();

// main function
int main()
{
    fun();
    printf("\nWelcome to declaration of function");
    return 0;
}


// function definition
char fun()
{
    printf("\nHello viewer");
}