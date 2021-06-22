/* Author : Chaitaly Kundu
Date : 22th June, 2021 */

                                                // INCOMPLETE

#include<stdio.h>


int checkBit(int num, int n)
{
    int mask;
    mask = 1 << n;


    int bit;
    bit = num & mask;
    if(bit == 0)
        return 0;
    else
    {
        num = num & ~mask;
        return 0;
    }
}

int main(){
    int num;

        // Input the number
    printf("Enter a decimal number : ");
    scanf("%d", &num);

    res = checkBit(num, 3);   // Check 3rd bit
    res = checkBit(num, 5);   // Check 5th bit

    return 0;
}