/* Author : Chaitaly Kundu
Date: 1st March, 2021 */

/* Paper of size A0 has dimensions 1189 mm * 841 mm.
   Each subsequent size A(n) is defined as A(n-1) cut in half parallel to its shorter sides.
   Thus paper of size A1 would have dimensions 841 mm * 594 mm.
   Write a program to calculate and print paper sizes A0, A1, A2 ... A8. */
#include<stdio.h>

/* main function */
int main()
{
    int length=1189, breadth=841, past_length, present;
    for(present=0;present<=8;present++)
    {
        printf("\npaper A%d :size %d*%d",present, length,breadth);
        past_length=length;
        length=breadth;
        breadth=past_length/2;
    }
    return 0;
}
