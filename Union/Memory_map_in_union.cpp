/* Author : Chaitaly Kundu
   Date : 13-07-2021*/


/* Memory map of union element . Print the address*/

#include<iostream>
using namespace std;

union book{
    char c;
    int a;
    float b;
} var;

int main()
{
    cout << "Address of a = " << &var.a << endl;
    cout << "Address of c = " << &var.c << endl;
    cout << "Address of b = " << &var.b << endl;
    

    return 0;
}