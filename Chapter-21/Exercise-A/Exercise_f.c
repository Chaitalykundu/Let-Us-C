#include<stdio.h>
int main()
{
    int i=32, j=65, k,l,m,n,o,p;

    k = i | 35;
    l = ~k;
    m = i & j;
    n = j ^ 32;
    o = j << 2;
    p = i >> 5;
    printf(" k = %d\n l = %d\n m = %d\n n = %d\n o = %d\n p = %d", k,l,m,n,o,p);
    return 0;
}

/* O/P:

 k = 35
 l = -36
 m = 0
 n = 97
 o = 260
 p = 1

*/