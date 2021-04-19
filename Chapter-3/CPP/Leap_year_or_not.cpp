/*  Author : Chaitaly Kundu
    Date : 20-04-21 */

//  Check the year is leap year or not

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int year;
    cout << "Enter the year: ";
    cin >> year;

    if(((year%4==0)&&(year%100!=0))|| (year%400==0))
    {
        cout << "The year is leap year";
    }
    else
        cout << "The year is not leap year";
    return 0;
}
