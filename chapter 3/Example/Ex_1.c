/* While purchasing certain items, a discount of 10% is offered if the quantity is more than 1000.
Write a program to calculate the total price.   */


#include<stdio.h>
int main()
{
    int qyt,discount;
    float rate,total;
    printf("Enter the quantity of items: ");
    scanf("%d",&qyt);
    printf("\nEnter the rate per items: ");
    scanf("%f",&rate);

    if(qyt>1000)
        discount=10;
    total=(qyt * rate)-(qyt * rate * discount / 100);
    printf("\nTotal expenses is %f", total);
}
