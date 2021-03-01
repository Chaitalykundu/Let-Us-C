/* Author : Chaitaly Kundu
Date: 1st March, 2021 */

/* The length and breadth of a rectangle and radius of a circle are input through the keyboard.
   Write a program to calculate the area and perimeter of the rectangle , and the area and circumference of the circle. */

#include<stdio.h>

/* main function */
int main()
{
    int l,b,area_of_rectangle,perimeter,r;
    float area_of_circle, circumference;

    // Rectangle
    printf("\n Enter length and breadth of Rectangle: ");
    scanf("%d %d",&l,&b);

    // Area and perimeter of Rectangle
    area_of_rectangle =l*b;
    perimeter =2*(l+b);
    printf("\n Area of Rectangle is: %d,  \n perimeter is: %d",area_of_rectangle,perimeter);

    // Circle
    printf("\n Enter the radius of circle: ");
    scanf("%d",&r);

    // Area and Circumference of Circle
    area_of_circle = 3.14 * r* r;
    circumference = 2 * 3.14 * r;

    printf("\n Area of Circle is: %f,  \n Circumference is: %f",area_of_circle,circumference);
    return 0;
}
