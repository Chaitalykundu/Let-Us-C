/* Author Chaitaly Kundu
Date: 4th dec, 2020 */

// Claculate the area of a circle

#include<stdio.h>   // file inclusion
#define PI 3.14     // macro expansion

int main()
{
    int r=3;
    float area;
    area = PI * r * r;
    printf("Area= %f",area);
    return 0;
}