/* Author : Chaitaly Kundu
Date: 19-04-21 */

/* WAP to receive the latitude and longitude in degrees of two places on the earth and output the distance between in nautical miles */

#include<stdio.h>
#include<math.h>
#define PI 3.14

int main()
{
    float l1, l2, g1, g2, d;

    printf("Enter the Latitude: ");
    scanf("%f %f" ,&l1,&l2);

    printf("Enter the Longitude: ");
    scanf("%f %f" ,&g1,&g2);

    // Latitude and Longitude in degrees
    l1 = l1 * PI / 180;
    l2 = l2 * PI / 180;
    g1 = g1 * PI / 180;
    g2 = g2 * PI / 180;


    d = 3963 * acos((sin (l1) * sin (l2))+ ( cos(l1) * cos(l2)) * cos(g2-g1));  // acos() is the method in math.h library for calculating cos inverse.


    printf("Distance between two places Nautical Mile is  %f" , d);
    return 0;
}
