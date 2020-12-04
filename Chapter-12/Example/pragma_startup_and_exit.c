/* Author Chaitaly Kundu
Date: 4th dec, 2020 */

#include<stdio.h>
void func1();
void func2();

#pragma startup func1
#pragma exit func2

int main()
{
    printf("I'm main\n");
    return 0;
}

void func1()
{
    printf("I am func1\n");
}

void func2()
{
    printf("I am func2\n");
}


