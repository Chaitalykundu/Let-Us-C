/* Author : Chaitaly Kundu
Date: 10th october, 2020 */

/* The distance between two cities (in km.) is input through the keyboard.
Write a program to convert and print the distance in meters, feet, inches and centimeters */

#include<stdio.h>

/* main function */
int main()
{
    float distance_in_km, distance_in_meter, distance_in_feet, distance_in_inches, distance_in_centimeter;
    printf("Enter the distance between two cities in km: ");
    scanf("%f",&distance_in_km);

    /* Distance calculation in meters, feet, inches and centimeters */
    distance_in_meter = distance_in_km * 1000;
    distance_in_feet = distance_in_km * 3280.84;
    distance_in_inches = distance_in_km * 39370.1 ;
    distance_in_centimeter = distance_in_km * 100000;

    printf("\n Distance in meter is %f \n Distance in feet is %f \n Distance in inches is %f \n Distance in centimeter is %f \n ", distance_in_meter,distance_in_feet,distance_in_inches,distance_in_centimeter);
    return 0;
}