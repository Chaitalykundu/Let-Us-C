/* Author : Chaitaly Kundu
Date : 22th June, 2021 */


/* Enter a number. Check if its nth bit is on or off */


#include<stdio.h>
#include<math.h>


int toggle(int a, int b)
{

    a = a ^ b;
    return a;
}

int main(){
    int a, b;

        // Input the number
    printf("\nEnter two number : ");
    scanf("%d %d", &a, &b);

    a = toggle(a,b);

    printf("\n1st XORed number is %d", a);
    a = toggle(a,b);
    printf("\nOriginal number is %d", a);

    return 0;
}