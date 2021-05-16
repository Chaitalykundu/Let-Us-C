/*  Author : Chaitaly Kundu
    Date : 16th May, 2021 */

#include<stdio.h>

int i=0;
void val();

int main()
{
    printf("main's i = %d\n", i);
    i++;
    val();
    printf("main's i = %d\n", i);
    val();
    return 0;
}

void val()
{
    i = 100;
    printf("main's i = %d\n", i);
    i++;
}

/* O/P:     main's i = 0
            main's i = 100
            main's i = 101
            main's i = 100      */