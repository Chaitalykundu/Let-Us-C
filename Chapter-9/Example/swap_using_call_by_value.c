/* Author : Chaitaly Kundu
Purpose : Learn C completely from Let us C, Complete #challengeAnshika
Date : 8th Jan, 2021 */


// Topic : Pointer (Call by Value)


#include<stdio.h>
int swap(int , int );

int main()
{
    int a=5,b=3;
    printf("\nBefore swapping -->  a = %d and b = %d", a,b);
    swap(a,b);
    return 0;
}

int swap(int x, int y)
{
    int t;
    t=x;
    x=y;
    y=t;
    printf("\nAfter swapping -->  x = %d and y = %d", x,y);
}

