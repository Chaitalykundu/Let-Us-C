/* Write a program to check whether the triangle is isosceles, equilateral, scalene or right angled triangle */

#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the three sides of triangle: ");
    scanf("%d %d %d",&a, &b, &c);


    // Condition to see if The triangle is isosceles, equilateral, scalene or right angled triangle
    if(a==b && b==c && c==a){
        printf("\nThe triangle is equilateral");
    }
    if((a==b && b!=c) || (b==c && a!= c) || (c==a && a!=b)){
        printf("\nThe triangle is isosceles");
    }
    if(a!=b && b!=c && c!=a){
        printf("\nThe triangle is scalene");
    }
    if((a*a == b*b + c*c) || (b*b == a*a + c*c)|| (c*c == a*a + b*b)){
        printf("\nThe triangle is right angled triangle");
    }
    return 0;
}

