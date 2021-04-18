/* Author : Chaitaly Kundu
Date: 18-04-21 */

/*accept a five-digit no and print the sum of digits */


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,e,n,s=0;
    cout << "Enter a 5 digit no.: ";
    cin >> n;


    a=n/10000;
    b=(n%10000)/1000;
    c=(n%1000)/100;
    d=(n%100)/10;
    e=n%10;

    // Sum Calculate
    s=a+b+c+d+e;

    cout << "sum is: " << s;
    return 0;
}
