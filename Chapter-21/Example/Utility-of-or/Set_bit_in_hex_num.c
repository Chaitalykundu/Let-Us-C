/* Author : Chaitaly Kundu
Date : 22th June, 2021 */


/* Enter a hexadecimal number. Turn on its nth bit */

#include<stdio.h>
#include<math.h>


int SetBit(int num, int n)
{
    int mask;
    mask = 1 << n;


    int bit;
    num = num | mask;
    return num;
}

int main(){
    int n, num;

        // Input the number
    printf("Enter a hexadecimal number : ");
    scanf("%X", &num);

    /* in decimal
    scanf("%d", &num); */

        // Input the bit to be checked
    printf("\nEnter the bit no which to be set: ");
    scanf("%d",&n);

    printf("\n%X",SetBit(num, n));

    return 0;
}