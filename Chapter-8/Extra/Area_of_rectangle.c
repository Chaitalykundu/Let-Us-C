/* Author: Chaitaly Kundu
Date: 06-11-2020 */

/* Calculate the area of rectangle using function */


#include<stdio.h>


// function prototype declaration
int AreaofRectangle(int length, int breadth);

// main function
int main()
{
    int l,b, area;
    printf("Enter the length and breadth: ");
    scanf("%d %d", &l,&b);
    area= AreaofRectangle(l,b); // function call
    printf("Area of a rectangle is %d", area);
    return 0;
}


// function definition
int AreaofRectangle(int length, int breadth)
{
    int area;
    area= length * breadth;
    return area;
}