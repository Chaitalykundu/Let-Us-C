/*  Author : Chaitaly Kundu
    Date: 30th April,2021 */

/* WAP to calculate the same of seven times of this series
((x - 1) / x )+ (1/2 ((x - 1) / x)^2 ) + (1/2 ((x - 1) / x)^3 ) + (1/2 ((x - 1) / x)^4 ) + (1/2 ((x - 1) / x)^5 ) + (1/2 ((x - 1) / x)^6 ) + (1/2 ((x - 1) / x)^7) 
*/

#include<stdio.h>
#include<math.h>

int main()
{
    int i;
    float x, sum=0.0;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    for(i=1;i<=7;i++)
    {
        if(i == 1)
            sum = (x - 1) / x;
        else
        {
            sum = sum + (pow( (x - 1) / x, i) /2);
        }
    }
    printf("\nSum = %f", sum);
    return 0;
}