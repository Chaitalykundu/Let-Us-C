/* Author : Chaitaly Kundu
Date: 19-04-21 */

/* WAP to receive an angle and print all the trigonometric ratio */

#include<stdio.h>
#include<math.h>
#define PI 3.14

int main()
{
    float x, s, c, t;

    printf("Enter the angle: ");
    scanf("%f", &x);

    // Angle in degree
    x= x * PI/ 180;

    // Ratio Calculation
    s= sin(x);
    c= cos(x);
    t= tan(x);


    printf("Trigonometric ratios are %f %f %f" , s,c,t);
    return 0;
}
