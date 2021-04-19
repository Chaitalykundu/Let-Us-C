/* Author: Chaitaly Kundu
Date: 12th October, 2020 */

/* While purchasing certain items, a discount of 10% is offered if the quantity is more than 1000.
If quantity and price per item are input through the keyboard, write a program to calculate the total expenses. */


#include<bits/stdc++.h>

using namespace std;

/* main function */
int main()
{
    // variable declaration
    int qyt, discount=0;
    float price, total;

    cout << "Enter the quantity of items: ";
    cin >> qyt;

    cout << "\nEnter the price per items: ";
    cin >> price;


    // Conditions
    if(qyt>1000)
        discount=10;

    // total expenses calculation
    total=(qyt * price)-(qyt * price * discount / 100);
    cout << "\nTotal expenses is " << total;

    return 0;
}
