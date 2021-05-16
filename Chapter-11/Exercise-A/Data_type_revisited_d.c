/*  Author : Chaitaly Kundu
    Date : 16th May, 2021 */

#include<stdio.h>

int x = 10;

int main()
{
    int x = 20;
    {
        int x =30;
        printf("%d\n",x);
    }
    printf("%d\n",x);
    return 0;
}

/* O/P:
        30
        20   */