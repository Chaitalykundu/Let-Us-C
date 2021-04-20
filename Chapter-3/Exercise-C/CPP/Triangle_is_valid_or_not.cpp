/*  Author : Chaitaly Kundu
    Date : 20-04-21 */

/* Check if the triangle is valid or not.
    The triangle is valid if the sum of three angles  is equal to 180 */


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,sum;
    cout << "Enter the 3 angles: ";
    cin >> a>> b >> c;

    sum=a+b+c;

    if(sum==180)
        cout << "The triangle is valid ";
    else
        cout << "The triangle is not valid ";
}
