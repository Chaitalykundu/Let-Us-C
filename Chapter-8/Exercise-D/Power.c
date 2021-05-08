/* Author: Chaitaly Kundu
   Date: 8th May, 2021 */

#include<stdio.h>

int power(int a, int b)
{
    int i, power_of_a=1;
    for(i=1;i<=b;i++)
    {
        power_of_a = power_of_a * a;
    }
    return power_of_a;
}

int main()
{
    int a, b, fact, value;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter a number: ");
    scanf("%d",&b);
    value = power(a, b);
    printf("Value of %d raised to %d is %d", a, b, value);
    return 0;
}