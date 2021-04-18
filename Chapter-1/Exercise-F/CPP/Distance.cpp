/* Author : Chaitaly Kundu
Date: 18-04-21 */

/* The distance between two cities (in km.) is input through the keyboard.
Write a program to convert and print the distance in meters, feet, inches and centimeters */

#include<bits/stdc++.h>
using namespace std;

/* main function */
int main()
{
    float distance_in_km, distance_in_meter, distance_in_feet, distance_in_inches, distance_in_centimeter;

    cout << "Enter the distance between two cities in km: ";
    cin >> distance_in_km;

    /* Distance calculation in meters, feet, inches and centimeters */
    distance_in_meter = distance_in_km * 1000;
    distance_in_feet = distance_in_km * 3280.84;
    distance_in_inches = distance_in_km * 39370.1 ;
    distance_in_centimeter = distance_in_km * 100000;


    cout << "\nDistance in meter is " << distance_in_meter << "\nDistance in feet is " << distance_in_feet << "\nDistance in inches is " << distance_in_inches << "\nDistance in centimeter is " << distance_in_centimeter ;
    return 0;
}
