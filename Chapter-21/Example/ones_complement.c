/*  Author : Chaitaly Kundu
    Date: 5th June, 2021 */

/* One's complement of a number */

#include<stdio.h>

int main()
{
    unsigned char ch=32;
    unsigned char ones_comp = ~ch;

    printf("%d\n",ones_comp);
    printf("%x\n",ones_comp);
    printf("%#x\n",ones_comp);
    printf("%X\n",ones_comp);
    printf("%#X\n",ones_comp);
    return 0;
}