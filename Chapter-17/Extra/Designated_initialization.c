/*  Author : Chaitaly Kundu
    Date: 5th May, 2021 */

/* Designated Initialization  */

#include<stdio.h>

struct abc{
    int x, y, z;
};
int main()
{
    struct abc a = { .y = 20, .x = 10, .z = 30};
    printf(" %d %d %d", a.x, a.y , a.z);
    return 0;
}