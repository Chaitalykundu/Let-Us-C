/* Author : Chaitaly Kundu
Date : 22th June, 2021 */


/* Enter a decimal number. Turn on its nth bit */

#include<stdio.h>
#include<math.h>


int SetBit(int num, int n)
{
    int mask;
    mask = 1 << n;

    num = num | mask;
    return num;
}

int main(){
    int n, num;

        // Input the number
    printf("Enter a decimal number : ");
    scanf("%d", &num);

    /* in decimal
    scanf("%d", &num); */

        // Input the bit to be checked
    printf("\nEnter the bit no which to be set: ");
    scanf("%d",&n);

    printf("\n%d",SetBit(num, n));

    return 0;
}