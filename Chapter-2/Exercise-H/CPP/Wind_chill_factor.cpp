/* Author : Chaitaly Kundu
Date: 18-04-21 */

/* WAP to receive the temperature and velocity and calculate Wind Chill Factor(wcf) */

#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    float t,v, wind_chill_factor;

    cout << "Enter the temperature: ";
    cin >> t;

    cout << "Enter the velocity: ";
    cin >> v;

    // Formula of Wind chill factor
    wind_chill_factor= 35.74 + 0.6215 * t + ( 0.4275 *t - 35.75) * pow(v,0.16);


    cout << "Wind chill factor is " << wind_chill_factor;
    return 0;
}
