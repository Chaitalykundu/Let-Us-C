/*  Author : Chaitaly Kundu
    Date : 20-04-21 */

/* write a program to find out if the area of a rectangle is greater than it's perimeter from length=5 and breadth=4 */


#include<bits/stdc++.h>

using namespace std;

int main()
{
    int length, breadth,area , perimeter;
    cout << "Enter the length and breadth of rectangle: ";
    cin >> length >> breadth;

    area= length * breadth;
    perimeter= (2*(length + breadth));

    if(area>perimeter)
        cout << "Area is greater than perimeter";
    else
        {
            if(area<perimeter)
                cout << "Area is lesser than perimeter";
            else
               cout << "Area is equal to perimeter";
        }
    return 0;
}
