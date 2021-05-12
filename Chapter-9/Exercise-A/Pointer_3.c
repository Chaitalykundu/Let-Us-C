/* Author : Chaitaly Kundu
Date: 12th May, 2021 */

#include<stdio.h>

int main()
{
    float a = 13.5;
    float *b, *c;
    b =&a;
    c = b;
    printf("%u %u %u\n", &a ,b, c);
    printf("%f %f %f %f %f\n", a, *(&a), *&a, *b, *c);
    return 0;
}

/* O/P:

2686756 2686756 2686756
13.500000 13.500000 13.500000 13.500000 13.500000

*/