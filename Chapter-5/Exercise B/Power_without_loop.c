/* Author : Chaitaly Kundu
Date: 21-04-2021 */

/*  Accept 2 numbers. WAP to find the value of one number raised to the power of another */

#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, power;
    printf("Enter two numbers: ");
    scanf("%d %d", &a,&b);

    power = pow(a,b);

    printf("%d raised to the power of %d is %d", a, b, power);
    return 0;
}
