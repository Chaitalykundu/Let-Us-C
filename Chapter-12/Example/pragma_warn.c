/* Author Chaitaly Kundu
Date: 4th dec, 2020 */

#include<stdio.h>
int func1();
void func2();
int func3();

#pragma warn -rvl // return value
#pragma warn -par // parameter not used
#pragma warn -rch // unreachable code
int main()
{
    func1();
    func2(7);
    func3();
    return 0;
}

int func1()
{
    int a=5;
}

void func2(int x)
{
    printf("I am inside func2\n");
}

int func3()
{
    int x=6;
    return x;
    x++;
}

// O/p: I am inside func2