/* Author : Chaitaly Kundu
   Date : 13-07-2021*/

#include<iostream>
using namespace std;

    // x and y axis
typedef struct axis{
    int x, y;
}a;

    // co-ordinates
typedef struct coordinates{
    a upper_left, lower_right;
}co;


    //  Calculate area
int area(co r){
    int length , breadth;

    length = r.lower_right.x - r.upper_left.x;
    breadth = r.upper_left.y - r.lower_right.y;

    return length * breadth;
}

int main(){

    co r;
        // Uppper Left Co-ordinates
    cout << "Enter the Upper left Co-ordinates : ";
    cin >> r.upper_left.x >> r.upper_left.y ;

        // Lower Right Co-ordinates
    cout << "Enter the Upper left Co-ordinates : ";
    cin >> r.lower_right.x >> r.lower_right.y ;

    cout << "Area is : " << area(r) ;

    return 0;
}