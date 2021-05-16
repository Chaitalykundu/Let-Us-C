#include<stdio.h>
static int y=77;
int func(int);
int main()
{
    static int z;
    printf("%d %d\n", y, z);
    return 0;
}

int func(int y)
{
    y = 5;
    return y;
}