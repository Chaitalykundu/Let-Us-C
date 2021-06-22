/* Author : Chaitaly Kundu
Date : 22th June, 2021 */


/* Enter a number. Check if its nth bit is on or off */


#include<stdio.h>


void checkBit(int num, int n)
{
    int mask;
    mask = 1 << n;


    int bit;
    bit = num & mask;
    if(bit == 0)
        printf("\n%dth bit is OFF",n);
    else
        printf("\n%dth bit is ON",n);
}

int main(){
    int num;

        // Input the number
    printf("Enter a decimal number : ");
    scanf("%d", &num);

    checkBit(num, 3);   // Check 3rd bit
    checkBit(num, 6);   // Check 6th bit
    checkBit(num, 7);   // Check 7th bit

    return 0;
}