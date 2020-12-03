/* Author Chaitaly Kundu
Date: 4th dec, 2020 */

// Claculate the area of two different circles (macros with arguments)

#include<stdio.h>   // file inclusion
#define AREA(X) (3.14*X*X)     // macros with argument (x)

int main()
{
    int r1=3, r2=5.5;
    float area;
    area = AREA(r1);
    printf("\nArea of 1st circle= %f",area);
    area = AREA(r2);
    printf("\nArea of 2nd circle= %f",area);
    return 0;
}