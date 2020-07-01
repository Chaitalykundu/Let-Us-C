/* print 1 to 10 using while loop */

#include<stdio.h>
int main()
{
    int i=5;
    while(i>=1)
    {
        printf("%d\n",i);
        i--;          /* If we don't use this, the loop will be infinite loop and i=5 always*/
    }
    return 0;
}
