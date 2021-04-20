/* Author : Chaitaly Kundu
Date: 13-03-2021 */

/* Write a program to enter numbers through keyboard till the user wants.
   At the end it should display the count of positive, negative or zeros entered*/

#include<stdio.h>
int main()
{
    int n,i,x,pos=0,neg=0,zero=0;
    printf("Enter the no. of entered elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");

    for(i=1;i<=n;i++)
    {
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
    }
    printf("Positive number = %d\nNegative number = %d\nZeros = %d\n", pos,neg,zero);
    return 0;
}
