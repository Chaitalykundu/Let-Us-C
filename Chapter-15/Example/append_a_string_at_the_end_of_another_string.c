/* Author: CHaitaly Kundu
Date: 10 dec, 2020 */

/* Write a program to append (i) a string at the end of another string
                             (ii) first n characters of a string at the end of another string */

#include<stdio.h>
#include<string.h>

int main()
{   
    // part 1
    char first_name[]= "Monisha ";
    char middle_name[]= "kundu";
    
    strcat(first_name , middle_name);      // appending middle name in first name & print first name
    printf("\nString after appending= %s",first_name);   
    printf("\nString before appending= %s",middle_name);   
    
    // part 2
    char first_name2[]= " Monisha ";
    char middle_name2[]= "kundu ";
    strcat(middle_name2 , first_name2);      // appending middle name in first name
    printf("\nString before appending= %s",first_name2);   
    printf("\nString after appending= %s",middle_name2); 

    // part 3
    char name[]="Chaitaly ";
    char surname[]= "Roy";
    strncat(name,surname,3);            // appending surname name in name
    printf("\nString one= %s",name);    
    printf("\nString two= %s",surname); 


    // part 4
    char name2[]="Chaitaly ";
    char surname2[]= "Roy";
    strncat(surname2,name2,3);            // appending middle name in name
    printf("\nString one= %s",name2);    
    printf("\nString two= %s",surname2);
    return 0;
}

/* O/P: 
        Lowercase String= moni
        Uppercase String= CHAITALY */