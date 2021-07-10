/*  Author : Chaitaly Kundu
    Date: 5th May, 2021 */

/* Array of structure */

#include<stdio.h>

struct book{
    char book_name[30];
    float price;
    int pages;
};

int main()
{
    struct book x[2];
    int i;
    for(i=0;i<2;i++)
    {
        printf("\nEnter the book name: ");
        scanf("%s", &x[i].book_name);
        printf("\nEnter the price of the book: ");
        scanf("%f", &x[i].price);
        printf("\nEnter the page no. of the book: ");
        scanf("%d", &x[i].pages);
    }

    for(i=0;i<2;i++)
    {
        printf("\nBook Name : %s\tPrice : %.2f\tPage no.: %d\n", x[i].book_name, x[i].price, x[i].pages);
    }
    return 0;
}