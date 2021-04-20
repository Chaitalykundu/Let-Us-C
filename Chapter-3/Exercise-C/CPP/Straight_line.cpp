/*  Author : Chaitaly Kundu
    Date : 20-04-21 */

/* Given three points are (x1,y1), (x2,y2), (x3,y3).
    write a program to check if all three points fall on one straight line */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x1,x2,x3,y1,y2,y3;
    cout << "Enter the value of three points: ";
    cin >> x1 >> x2 >> x3 >> y1 >> y2 >> y3;

    if(((x1-x2)/(x2-x3)== ((y1-y2)/(y2-y3))))
        cout << "All three points fall on one straight line";
    else
        cout << "All three points don't fall on one straight line";
}
