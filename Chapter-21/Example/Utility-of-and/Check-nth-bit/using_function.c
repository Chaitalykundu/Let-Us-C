/* Author : Chaitaly Kundu
Date : 22th June, 2021 */


/* Enter a number. Check if its nth bit is on or off */


#include<stdio.h>
#include<math.h>


void checkBit(int num, int n)
{
    int mask;
    mask = 1 << n;


    int bit;
    bit = num & mask;
    if(bit == 0)
        printf("OFF");
    else
        printf("ON");
}

int main(){
    int n, num;

        // Input the number
    printf("Enter a hexadecimal number : ");
    scanf("%X", &num);

    /* in decimal
    scanf("%d", &num); */

        // Input the bit to be checked
    printf("\nEnter the bit no which to be checked: ");
    scanf("%d",&n);

    checkBit(num, n);

    return 0;
}