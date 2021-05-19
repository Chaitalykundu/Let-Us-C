/* Author: CHaitaly Kundu
Date: 19th May, 2021 */

/* Write a program to print multiple string without user input*/

#include<stdio.h>
int main()
{
    char name[20];

    printf("Enter full name: ");
    scanf("%[^\n]s",name);

    printf("Hello %s",name);

    return 0;
}