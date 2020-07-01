/* print 1 to 10 using while loop */

#include<stdio.h>
int main()
{
    int i=1;
    while(i<=10)
    {
        printf("%d\n",i);
        i++;          /* If we don't use this, the loop will be infinite loop and i=1 always*/
    }
    return 0;
}
