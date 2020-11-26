/* Author: Chaitaly Kundu
Date: 26 nov, 2020 */


#include<stdio.h>

int main()
{
    auto int i=1;
    {
        auto int i=2;
        {
            auto int i=3;
            printf("%d",i);     // 3
        }
        printf(" %d",i);    //2
    }
    printf(" %d",i);    //1
    return 0;
}

// O/P: 3 2 1
