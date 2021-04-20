/* Write a program to check whether the triangle is valid or not */

#include<stdio.h>
int main()
{
    int a, b, c, sum, largest;
    printf("Enter the three sides of triangle: ");
    scanf("%d %d %d",&a, &b, &c);


    // Find the largest side & sum of other 2 sides
    if(a>b && a>c)
    {
        sum = b + c;
        largest = a;
    }
    else if(a<b && b>c)
    {
        sum = a + c;
        largest = b;
    }
    else{
        sum = a + b;
        largest = c;
    }

    printf("\nLargest side is %d and sum is %d", largest, sum);


    // Condition to see if The triangle is valid or not
    if(sum > largest)
    {
        printf("\nThe triangle is valid");
    }
    else
    {
        printf("\nThe triangle is not valid");
    }
    return 0;
}
