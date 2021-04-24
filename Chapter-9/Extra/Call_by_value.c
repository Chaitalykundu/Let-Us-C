/* Author: Chaitaly Kundu
Date; 24-04-21 */

/* Call by value */

#include<stdio.h>


int num(int x,int y)
{
    x=20;
    y=10;
    printf("\nx = %d and y = %d", x,y);
}

int main()
{
    int x=10, y=20;
    num(x,y);
    printf("\nx = %d and y = %d", x,y);
    return 0;
}

/* O/p: x = 20 and y = 10
        x = 10 and y = 20 */
