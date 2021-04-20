/*  Author : Chaitaly Kundu
    Date : 20-04-21 */

/* Write a program to find the absolute value of a number  */
/* An absolute value of a number is the distance of this number from 0.
Ex: he absolute value of 5 is 5. The distance from 5 to 0 is 5 units.
The absolute value of –5 is 5. The distance from –5 to 0 is 5 units */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j;
    cout << "Enter the no: ";
    cin >> i;

    if(i>=0)
        j=i;
    else
        j=-i;

    cout << "Absolute Value of " << i << " is "<< j;
    return 0;
}
