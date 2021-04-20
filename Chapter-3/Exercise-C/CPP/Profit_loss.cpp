/*  Author : Chaitaly Kundu
    Date : 20-04-21 */


/* accept cost price and selling price from keyboard.
 write a program to determine if the seller has made profit or incurred loss.
 also determine how much profit he made or loss he incurred */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cp,sp,profit,loss;
    cout << "Enter the cost price: ";
    cin >> cp;
    cout << "Enter the selling price: ";
    cin >> sp;

    if(cp<sp)
    {
        cout << "\n He made profit";
        profit=sp-cp;
        cout << "\nProfit= " << profit;
    }
    else if (cp>sp)
    {
        cout << "\n He incurred loss";
        loss=cp-sp;
        cout << "\n Loss= " << loss;
    }
    else
        cout << "\nNeither profit nor loss";

    return 0;
}
