/* Author: CHaitaly Kundu
Date: 5th dec, 2020 */

/* Write a program to print a string using NULL */

#include<stdio.h>
int main()
{
    char name[]= "MONI";
    int i=0;
    while(name[i] !='\0')
    {
        printf("%c",name[i]);
        i++;
    }
    return 0;
}