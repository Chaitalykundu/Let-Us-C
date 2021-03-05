#include<stdio.h>
int main()
{
    int x=20, y=40, z=45;
    if(x>y && x>z)
        printf("biggest= %d",x);
    else if(y>x && y>z)
        printf("biggest= %d",y);
    if(z>x && z>y)
        printf("biggest= %d",z);
}
