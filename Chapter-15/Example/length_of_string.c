/* Author: CHaitaly Kundu
Date: 09 dec, 2020 */

/* Write a program to calculate the string of length */

#include<stdio.h>
#include<string.h>

int main()
{
    char name[]= "MONI";
    int l1,l2;

    l1=strlen(name);
    l2=strlen("Chaitaly");
    printf("String=%s    length=%d",name,l1);
    printf("\nString=%s    length=%d","Chaitaly",l2);
    return 0;
}

/* O/P: 
        String=MONI    length=4
        String=Chaitaly    length=8  */