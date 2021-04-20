/*  Author : Chaitaly Kundu
    Date : 20-04-21 */

/* accept the ages of ram, shyam and ajay and determine the youngest of three */


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int age_of_ram, age_of_shyam, age_of_ajay;
    cout << "Enter the age of three boys: ";
    cin >> age_of_ram >> age_of_shyam >> age_of_ajay;

    if(age_of_ram < age_of_shyam && age_of_ram < age_of_ajay)
    {
        cout << " Ram is the youngest";
    }
    else if(age_of_shyam < age_of_ram && age_of_shyam < age_of_ajay)
    {
        cout << " Shyam is the youngest";
    }
    else
        cout << " Ajay is the youngest";
}
