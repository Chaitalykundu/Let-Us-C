/* Author : Chaitaly Kundu
Date: 18-04-21 */

// WAP to interchange the contents of two locations C and D


#include<bits/stdc++.h>
using namespace std;


/* main function */
int main()
{
    int c,d,t;
    cout << "Enter the numbers in location C and D respectively: ";
    cin >> c >> d;

    // Interchanging
    t=c;
    c=d;
    d=t;

    cout << "\nNew number in location is " << c;
    cout << "\nNew number in location is " << d;
    return 0;
}
