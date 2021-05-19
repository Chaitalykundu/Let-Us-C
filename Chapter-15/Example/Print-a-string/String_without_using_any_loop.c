/* Author: CHaitaly Kundu
Date: 19th May, 2021 */

/* Write a program to print a string without using any loop and format specifier %s*/

#include<stdio.h>
int main()
{
    char name[10];

    printf("Enter a string: ");
    scanf("%s",name);

    printf("Hello %s",name);
    return 0;
}