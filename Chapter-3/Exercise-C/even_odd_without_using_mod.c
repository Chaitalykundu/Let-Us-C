/*  Author : Chaitaly Kundu
    Date : 20-04-21 */

// Check the number is even or odd without using mod

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the no: ");
    scanf("%d",&num);
    if((num/2)*2==num)
        printf("The no. is even");
    else
        printf("The no. is odd");
}
