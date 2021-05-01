/*  Author : Chaitaly Kundu
    Date: 1st May, 2021 */

#include<stdio.h>

int main()
{
    char first_name[] = "Chaitaly";
    char sur_name[] = "Kundu";
    char first_name2[] = "Monisha";
    char sur_name2[] = "Kundu";
    printf("01234567890123456789012345678901234567890123456789");
    printf("\n%20s %20s.", first_name, sur_name);
    printf("\n%-20s %-20s.", first_name2, sur_name2);

    return 0;
}

/*
01234567890123456789012345678901234567890123456789
            Chaitaly                Kundu
Monisha              Kundu

*/