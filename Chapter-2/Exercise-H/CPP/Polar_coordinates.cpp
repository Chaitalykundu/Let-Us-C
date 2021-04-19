/* Author : Chaitaly Kundu
Date: 18-04-21 */

/* WAP to receive  Cartesian co-ordinates (x,y) of a point and convert them into polar co-ordinates (r,theta) */

#include<bits/stdc++.h>
#include<math.h>
#define PI 3.14
using namespace std;

int main()
{
    int x,y;
    float r, theta;
    cout << "Enter the Cartesian Co-ordinates: " ;
    cin >> x >> y;

    r=sqrt(pow(x,2)+pow(y,2));
    theta= atan(y/x);  // atan() is the method in math.h library for calculating tan inverse.
    theta = theta *180/ PI;

    cout << "Polar Co-ordinates (r , theta) = (" << r << " , " << theta << ")";
    return 0;
}
