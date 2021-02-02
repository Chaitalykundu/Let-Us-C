/* Author : Chaitaly Kundu
Purpose : Learn C completely from Let us C, Complete #challengeAnshika
Date : 8th Jan, 2021 */


// Topic : Pointer (Call by Reference)
// Area and perimeter of a circle

#include<stdio.h>

void areaperi(int , float *, float *);

int main()
{
    int r=5;
    float a,p;
    areaperi(r,&a,&p);
    printf("\nArea = %f",a);
    printf("\nPerimeter = %f",p);
    return 0;
}

void areaperi(int r, float *a, float *p)
{
    *a = 3.14 * r * r;
    *p = 2 * 3.14 * r;
}