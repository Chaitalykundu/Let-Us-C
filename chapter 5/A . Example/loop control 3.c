#include<stdio.h>
int main()
{
    int x=4,y=3,z;
    z=x-- - y;
    printf("%d %d %d\n",x,y,z);
    return 0;
}

/* o/p: 3 3 1 */
