/* Author: CHaitaly Kundu
Date: 19th May, 2021 */

/* Write a program to print a string using pointer */

#include<stdio.h>
int main()
{
    char name[]= "MONI";
    char *ptr;
    ptr = name;

    while(*ptr !='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    return 0;
}