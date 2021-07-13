/* Author : Chaitaly Kundu
   Date : 13-07-2021*/

#include<iostream>
using namespace std;
typedef struct abc{
    int a;
    char b;
    int c;
}st;

int main(){

    st x = {0,1};
    cout << "Size of x is " << sizeof(x);           // OutPut : 12 (4+1+3+4)
    return 0;
}