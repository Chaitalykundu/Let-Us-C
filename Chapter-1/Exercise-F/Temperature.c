/* Author : Chaitaly Kundu
Date: 1st March, 2021 */

/* Temperature of a city in fahrenheit degrees is input through the keyboard. Write a program to convert this temperature into centigrade degrees  */

#include<stdio.h>

/* main function */
int main()
{
    float c, f;
    printf("Enter the temperature in fahrenheit: ");
    scanf("%f",&f);

    /*  Temperature calculation in centigrade*/
    c = ((f-32)/9)*5;
    printf("\n Temperature in centigrade is %f ",c);
    return 0;
}
