/*  Author : Chaitaly Kundu
    Date : 20-04-21 */


/* Accept a 5 digit no. Write a program to obtain the reversed no.
    determine if the no. and it's reverse is equal or not*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num,a,b,c,d,e, reverse;
    cout << "Enter the 5 digit no.: ";
    cin >> num;

    /* reverse no */
    a=num/10000;
    b=(num%10000)/1000;
    c= (num%1000)/100;
    d=(num%100)/10;
    e=num%10;

    reverse=((10000*e)+(1000*d)+(100*c)+(10*b)+a);
    cout << "\nThe reverse no is " << reverse;

    /* Check equal or not */
    if(num==reverse)
        cout << "\nThe no and it's reverse are equal";
    else
        cout << "\nThe no and it's reverse are not equal";
}
