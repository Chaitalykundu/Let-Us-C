/* Author: Chaitaly Kundu
Date: 5th March, 2021 */

// Example of nested-if-else
/* Write a program to check whether you entered 1 or 2 or another number */


#include<bits/stdc++.h>

using namespace std;

/* main function */
int main()
{
    int i; /* variable declaration */

    cout << "Enter the number: ";
    cin >> i;

    /* Conditions */
    if(i==1)
    {
        cout << "You entered 1\n";
    }
    else{
        if(i==2){
            cout << "You entered 2\n";
        }
        else{
            cout << "You entered other than 1 and 2.\nThe Number is " << i;
            cout << endl ;
        }
    }
    return 0;
}
