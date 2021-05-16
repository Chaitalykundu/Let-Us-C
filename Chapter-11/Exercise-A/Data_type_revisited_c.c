/*  Author : Chaitaly Kundu
    Date : 16th May, 2021 */


#include<stdio.h>

void func();

int main()
{
    func();
    func();
    return 0;
}

void func()
{
    auto int i=0;
    register int j=0;
    static int k=0;
    i++, j++, k++;
    printf("%d %d %d\n", i,j,k);
}
/* O/P:
    1 1 1
    1 1 2   */