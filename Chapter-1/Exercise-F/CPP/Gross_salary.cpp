/* Author : Chaitaly Kundu
Date: 18-04-21 */

/* Ramesh's basic salary in input through the keyboard.
His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary.
Write a program to calculate his gross salary */

#include<bits/stdc++.h>
using namespace std;


/* main function */
int main()
{
    float gross_salary, basic_salary, dearness_allowance, house_rent_allowance;
    cout << "Enter the basic salary: ";
    cin >> basic_salary ;


    /* dearness allowance and house rent allowance calculate */
    dearness_allowance = basic_salary * 40 /100;
    house_rent_allowance = basic_salary * 20 /100;


    /* gross salary calculate */
    gross_salary = basic_salary + (dearness_allowance + house_rent_allowance);
    cout << "Gross salary is " << gross_salary << endl;
    return 0;
}
