/* Author: Chaitaly Kundu
Date: 21-04-2021 */


#include<stdio.h>

/* main function */
int main()
{
    int i=1, j=1;
    for(;;)
    {
        if(i>5)
            break;
        else
            j+=i;
        printf("%d\n",j);
        i += j;
        return 0;
    }
}


/* Output : 2 */
