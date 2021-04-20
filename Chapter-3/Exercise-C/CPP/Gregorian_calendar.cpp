/*  Author : Chaitaly Kundu
    Date : 20-04-21 */

/* According to Gregorian calender, it was Monday on the date  01/01/01.
   WAP To Find The Day on 01 January of this year */

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int year, ref_year= 2001, difference, total_days=0, leap_year=0, first_day=0;
    cout << "Enter this year: ";
    cin >> year ;

    difference = year - ref_year;
    while(ref_year < year)
    {
        if(ref_year % 100 == 0)
        {
            if(ref_year % 400 == 0)
            {
                leap_year++;
            }
        }
        else
        {
            if(ref_year % 4 == 0)
            {
                leap_year++;
            }
        }
        ref_year++;
    }
    total_days = (difference - leap_year) * 365 + leap_year * 366;
    first_day  = total_days % 7;

    cout << "First day of " << year << " is " ;

    switch(first_day)
    {
        case 0:
            cout << "Monday";
            break;
        case 1:
            cout << "Tuesday";
            break;
        case 2:
            cout << "Wednesday";
            break;
        case 3:
            cout << "Thursday";
            break;
        case 4:
            cout << "Friday";
            break;
        case 5:
            cout << "Saturday";
            break;
        case 6:
            cout << "Sunday";
            break;
    }
    return 0;
}
