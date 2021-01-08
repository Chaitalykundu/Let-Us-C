/* Author : Chaitaly Kundu
Purpose : Learn C completely from Let us C, Complete #challengeAnshika
Date : 8th Jan, 2021 */


// Topic : Pointer


#include<stdio.h>

int main()
{
    int a = 12;
    printf("\n Address of a is %u", &a);   // Address
    printf("\n Value of a is %d",a);       // Value
    printf("\n Value of a is %d",*(&a));   // Value using pointer
    return 0;
}