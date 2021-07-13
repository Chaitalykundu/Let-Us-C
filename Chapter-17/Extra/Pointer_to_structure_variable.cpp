/* Author : Chaitaly Kundu
   Date : 03-07-2021*/

#include<iostream>
using namespace std;
typedef struct abc{
    int x;
    int y;
}st;

int main(){

    st a = {0,1};
    st *p = &a;
    cout << p->y << " " << p->x;
    return 0;
}