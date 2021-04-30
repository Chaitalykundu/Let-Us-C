/* Author: Chaitaly Kundu
Date: 21-04-2021 */


#include<stdio.h>

/* main function */
int main()
{
    int i;
    for(i=1;i<=5;printf("%d\n",i));
        i++;
    return 0;

}


/* Output : 1
            1
            1
            1
            .
            .
            .
            infinity

Explanation: There is ; after for loop. So the loop will continue without incrementing the value of i*/
