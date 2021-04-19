/* Author : Chaitaly Kundu
Date: 18-04-21 */

/* WAP to receive the latitude and longitude in degrees of two places on the earth and output the distance between in nautical miles */

#include<bits/stdc++.h>
#include<math.h>
#define PI 3.14
using namespace std;

int main()
{
    float l1, l2, g1, g2, d;

    cout << "Enter the Latitude in degrees: ";
    cin >> l1 >> l2;

    cout << "Enter the Longitude in degrees: ";
    cin >> g1 >> g2;

    l1 = l1 * PI / 180;
    l2 = l2 * PI / 180;
    g1 = g1 * PI / 180;
    g2 = g2 * PI / 180;


    d = 3963 * acos((sin (l1) * sin (l2))+ ( cos(l1) * cos(l2)) * cos(g2-g1));  // acos() is the method in math.h library for calculating cos inverse.


    cout << "Distance between two places Nautical Mile is " << d;
    return 0;
}
