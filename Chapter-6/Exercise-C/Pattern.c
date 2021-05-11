/*  Author : Chaitaly Kundu
    Date: 30th April, 2021 */

/* WAP to produce the following output
                1
           2       3
       4       5       6
    7       8       9       10 */

#include<stdio.h>
int main()
{
    int num=4,r,c,sp,i=1;
    for(r=1; r<=num; r++)
    {
        for(sp=1; sp<=num-r; sp++)
            printf(" ");
                for(c=1; c<=r; c++,i++)
                    printf("%d ",i);
            printf("\n");
    }
    return 0;
}