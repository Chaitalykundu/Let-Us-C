/*  Author : Chaitaly Kundu
    Date: 5th May, 2021 */

/* Array of structure */

#include<stdio.h>

struct book{
    float price;
    int pages;
};

int main()
{
    struct book x[2];
    int i;
    for(i=0;i<2;i++)
    {
        printf("\nEnter the price of the book: ");
        scanf("%f", &x[i].price);
        printf("\nEnter the page no. of the book: ");
        scanf("%d", &x[i].pages);
    }

    for(i=0;i<2;i++)
    {
        printf("\nPrice : %.2f\tPage no.: %d\n", x[i].price, x[i].pages);
    }
    return 0;
}