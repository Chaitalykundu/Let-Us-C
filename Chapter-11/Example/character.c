/* Author: Chaitaly Kundu
Date: 26 nov, 2020 */


#include<stdio.h>

int main()
{
    char ch= 128;
    char dh= -132;
    printf("\n%d %d",ch,dh);    // O/P: -128 124
    printf("\n%c %c",ch,dh);    // O/P: Ç |
    return 0;
}


/* in char we can't take value bigger than +127 and smaller than -128 (as range is -128 to +127)
hile assigning 128 it exceeds +127 by 1. so the 1st value on the negative side(-128) will be assigned.
Similarly -132 exceeds -128 by 4. So 4th value from positive side (124) will be assigned*/