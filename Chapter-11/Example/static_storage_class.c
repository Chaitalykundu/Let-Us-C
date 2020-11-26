/* Author: Chaitaly Kundu
Date: 26 nov, 2020 */


#include<stdio.h>
void increment();
int main()
{
    increment();
    increment();
    increment();
    return 0;
}

void increment()
{
    auto int i=1;
    static int j=1;
    i=i+1;
    j=j+1;
    printf("\n%d %d",i,j);
}

/* O/P: 2 2
        2 3
        2 4 */
