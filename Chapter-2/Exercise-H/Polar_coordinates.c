/* Author : Chaitaly Kundu
Date: 19-04-21 */

/* WAP to receive  Cartesian co-ordinates (x,y) of a point and convert them into polar co-ordinates (r,theta) */

#include<stdio.h>
#include<math.h>
#define PI 3.14

int main()
{
    int x,y;
    float r, theta;
    printf("Enter the Cartesian Co-ordinates: ");
    scanf("%d %d" ,&x,&y);

    r=sqrt(pow(x,2)+pow(y,2));
    theta= atan(y/x);  // atan() is the method in math.h library for calculating tan inverse.
    theta = theta *180/ PI;

    printf("Polar Co-ordinates (r , theta) = (%f , %f)" , r, theta);
    return 0;
}
