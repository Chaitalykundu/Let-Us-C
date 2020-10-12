/* Author: Chaitaly Kundu
Date: 12th October, 2020 */

/* While purchasing certain items, a discount of 10% is offered if the quantity is more than 1000.
If quantity and price per item are input through the keyboard, write a program to calculate the total expenses. */


#include<stdio.h>

/* main function */
int main()
{
    int qyt,discount=0; /* variable declaration */
    float price,total;
    printf("Enter the quantity of items: ");
    scanf("%d",&qyt);
    printf("\nEnter the price per items: ");
    scanf("%f",&price);

    /* Conditions */
    if(qyt>1000)
        discount=10;

    /* total expenses calculation */
    total=(qyt * price)-(qyt * price * discount / 100);
    printf("\nTotal expenses is %f", total);
    return 0;
}
