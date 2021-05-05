/*  Author : Chaitaly Kundu
    Date: 5th May, 2021 */

/* Memory map of structure element */

#include<stdio.h>

struct book{
    char *name;
    float price;
    int pages;
};

struct  book b1 = {"R S agarwal", 740.25, 1190};

int main()
{
    printf("\t\t Books details\n.........................................\n\n");
    printf("Name %s \tAddress = %u\n", b1.name, &b1.name );
    printf("Price %f \tAddress = %u\n", b1.price, &b1.price );
    printf("Pages %d \t\tAddress = %u\n", b1.pages, &b1.pages );

    return 0;
}