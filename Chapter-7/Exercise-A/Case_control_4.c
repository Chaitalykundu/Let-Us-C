/*  Author : Chaitaly Kundu
    Date : 30th April, 2021 */
    
#include<stdio.h>
int main()
{
    int k;
    float j=2.0;
    switch(k=j+1)
    {
        case 3:
            printf("Trapped\n");
            break;
        default:
            printf("Caught!\n");
    }
    return 0;
}

/* o/p: Trapped
*/
