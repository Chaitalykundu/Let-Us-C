/* Author: Chaitaly Kundu
Date: 26 nov, 2020 */


#include<stdio.h>

int main()
{
    auto int i;
    auto int j= 132;
    printf("\n%d %d",i,j);    
    return 0;
}

// O/P: 16 132  
// the value of i is garbage value. It may change after each compilation
// the value will be stored in CPU register