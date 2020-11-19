#include<stdio.h>
int check(int);
int main()
{
    int i=45,c;
    c=check(i);
    printf("%d\n",c);
    return 0;
}
int check(int ch)
{
    if(ch>=45)
        return (100);
    else
        return (10 * 10);
}