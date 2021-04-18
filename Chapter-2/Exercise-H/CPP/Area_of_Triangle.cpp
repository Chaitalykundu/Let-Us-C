/* Author : Chaitaly Kundu
Date: 18-04-21 */

/* if lengths of three sides of a triangle are input through the keyboard, write a program to find the area of the triangle  */

#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int main()
{
    int a,b,c;
    float s,area;
    cout << "\nEnter the lengths of 3 sides: ";
    cin >> a >> b >> c;

    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));

    cout << "\nArea is: " << area;
    return 0;
}
