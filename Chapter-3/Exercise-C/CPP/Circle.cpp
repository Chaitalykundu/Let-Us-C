
/*  Author : Chaitaly Kundu
    Date : 20-04-21 */

/*  Given the coordinates (x,y)of the center of a circle and its radius.
    WAP to determine whether a points lies inside the circle or on the circle or outside the circle */

#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int main()
{
    int x,y,r;
    float distance,d;
    cout << "Enter the radius and coordinates: ";
    cin >> r >> x >> y;

    distance = pow(x,2) + pow(y,2); // Let center of the circle is (0,0)
    d = pow(r,2);

    // Condition
    if(distance<d)
        cout << "The point is inside the circle" << endl;
    else{
        if(distance>d)
            cout << "The point is outside the circle" << endl;
        else
            cout << "The point is on the circle" << endl;
    }
    return 0;
}
