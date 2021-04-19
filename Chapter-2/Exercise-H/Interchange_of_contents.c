/* Author : Chaitaly Kundu
Date: 18-04-21 */

// WAP to interchange the contents of two locations C and D


#include<stdio.h>
int main()
{
    int c,d,t;
    printf("Enter the numbers in location C and D respectively: ");
    scanf("%d %d",&c, &d);

    // Interchanging
    t=c;
    c=d;
    d=t;

    printf("\nNew number in location C is %d", c);
    printf("\nNew number in location D is %d", d);
    return 0;
}
