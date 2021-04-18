/* Author : Chaitaly Kundu
Date: 18-04-21 */

/* Temperature of a city in fahrenheit degrees is input through the keyboard. Write a program to convert this temperature into centigrade degrees  */

#include<bits/stdc++.h>
using namespace std;

/* main function */
int main()
{
    float c, f;
    cout << "\nEnter the temperature in fahrenheit: ";
    cin >> f;

    /*  Temperature calculation in centigrade*/
    c = ((f-32)/9)*5;
    cout << "\nTemperature in centigrade is " << c;
    return 0;
}
