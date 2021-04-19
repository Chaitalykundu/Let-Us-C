/* Author : Chaitaly Kundu
Date: 19-04-21 */

/* WAP to receive an angle and print all the trigonometric ratio */

#include<bits/stdc++.h>
#include<math.h>
#define PI 3.14

using namespace std;

int main()
{
    float x, s, c, t;

    cout << "Enter the angle: ";
    cin >> x;

    // Angle in degree
    x= x * PI/ 180;

    // Ratio Calculation
    s= sin(x);
    c= cos(x);
    t= tan(x);


    cout << "Trigonometric ratios are " << s << c << t;
    return 0;
}
