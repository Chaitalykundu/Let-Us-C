/* Author : Chaitaly Kundu
Date: 1st March, 2021 */

/* The length and breadth of a rectangle and radius of a circle are input through the keyboard.
   Write a program to calculate the area and perimeter of the rectangle , and the area and circumference of the circle. */

#include<bits/stdc++.h>
using namespace std;

/* main function */
int main()
{
    int l,b,area_of_rectangle,perimeter,r;
    float area_of_circle, circumference;

    // Rectangle
    cout << "\n Enter length and breadth of Rectangle: ";
    cin >> l >> b;

    // Area and perimeter of Rectangle
    area_of_rectangle =l*b;
    perimeter =2*(l+b);
    cout << "\n Area of Rectangle is: " << area_of_rectangle << "\n perimeter is: " << perimeter;

    // Circle
    cout << "\n Enter the radius of circle: ";
    cin >> r;

    // Area and Circumference of Circle
    area_of_circle = 3.14 * r* r;
    circumference = 2 * 3.14 * r;

    cout << "\n Area of Circle is: " << area_of_circle << "\n Circumference is: " << circumference;
    return 0;
}
