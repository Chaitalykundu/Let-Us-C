/* Author: CHaitaly Kundu
Date: 09 dec, 2020 */

/* Write a program to convert a string in lowercase and a string to upppercase */

#include<stdio.h>
#include<string.h>

int main()
{
    char name[]= "MONI";
    char name2[]="Chaitaly";
    

    strlwr(name);
    strupr(name2);
    printf("Lowercase String= %s",name);    // lowercase conversion
    printf("\nUppercase String= %s",name2); // uppercase conversion
    return 0;
}

/* O/P: 
        Lowercase String= moni
        Uppercase String= CHAITALY */