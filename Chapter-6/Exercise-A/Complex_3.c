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


/* Output : 2
Explanation: As return 0 *if inside the loop , the control will go to else and print the value.
After his it'll go to return part and terminate the code */
