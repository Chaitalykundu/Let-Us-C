/*  Author : Chaitaly Kundu
    Date : 20-04-21 */

/* Given a point (x,y).
   Write a program to find if it lies on x-axis, y-axis or on the origin. */



#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    cout  << "Enter the coordinates of the point: ";
    cin >> x >> y;

    if(x!=0 && y==0)
        cout  << "\nPoint lies on x-axis";
    else if(x==0 && y!=0)
        cout  << "\nPoint lies on y-axis";
    else if(x==0 && y==0)
        cout  << "\nPoint lies on the origin";
    else
        cout  << "\nplease enter proper value";
}
