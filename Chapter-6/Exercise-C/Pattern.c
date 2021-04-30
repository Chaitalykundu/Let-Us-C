/*  Author : Chaitaly Kundu
    Date: 30th April, 2021 */

/* WAP to produce the following output
                1
           2       3
       4       5       6
    7       8       9       10 */


                            // INCOMPLETE

#include<stdio.h>

int main()
{
    int i, space, num=1 ;
    for(i=1; i<=4; ++i)
    {
        for(space = 1; space<= 4-i; ++space)
        {
            printf(" ");
            printf("%d ", num);
            ++num;
        }
        printf("\n");
    }
    return 0;
}