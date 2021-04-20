/* Author : Chaitaly Kundu
Date: 21-04-2021 */

/*  Accept 2 numbers. WAP to find the value of one number raised to the power of another */

        // using while loop

#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, t, power=1;
    printf("Enter two numbers: ");
    scanf("%d %d", &a,&b);

    t= b;
    while(t>0)
    {
        power = power * a;
        t--;
    }

    printf("%d raised to the power of %d is %d", a, b, power);
    return 0;
}
