/* Author: CHaitaly Kundu
Date: 09 dec, 2020 */

/* Write a program to copy a string in another string */

#include<stdio.h>
#include<string.h>

int main()
{
    char name[]= "Chaitaly";
    char target[20];

    strcpy( target, name );  // target wil be call first
    
    printf("Source String= %s",name);
    printf("\nTarget String= %s",target);
    return 0;
}

/*  O/P: 
        Source String= Chaitaly
        Target String= Chaitaly  */