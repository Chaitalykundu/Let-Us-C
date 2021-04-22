/* Author : Chaitaly Kundu
Date: 21-04-2021 */

/* Write a program to enter numbers through keyboard till the user wants.
   At the end it should display the count of positive, negative or zeros entered*/

            // Incomplete


#include<stdio.h>
int main()
{
    int x,pos=0,neg=0,zero=0;
    char answer = 'Y';

    while(answer == 'Y')
    {
        printf("\nEnter the number: ");
        scanf("%d",&x);
        if(x<0)
        {
            neg=neg+1;
        }
        else if(x>0)
        {
            pos=pos+1;
        }
        else{
            zero=zero+1;
        }

        printf("\nDo you want to continue? (Y/N) ");
        scanf("%d",&answer);
    }
    printf("\nPositive number = %d\nNegative number = %d\nZeros = %d\n", pos,neg,zero);
    return 0;
}
