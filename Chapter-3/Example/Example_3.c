/* Author: Chaitaly Kundu
Date: 5th March, 2021 */

// Example of nested-if-else
/* Write a program to check whether you entered 1 or 2 or another number */


#include<stdio.h>

/* main function */
int main()
{
    int i; /* variable declaration */

    printf("Enter the number: ");
    scanf("%d",&i);

    /* Conditions */
    if(i==1)
    {
        printf("You entered 1\n");
    }
    else{
        if(i==2){
            printf("You entered 2\n");
        }
        else{
            printf("You entered other than 1 and 2.\nThe Number is %d\n", i);
        }
    }
    return 0;
}
