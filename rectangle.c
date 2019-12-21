#include<stdio.h>
int main()
{
    int l,b,h,a,p,v;
    printf("\n enter length and breadth and height");
    scanf("%d%d%d",&l,&b,&h);
    a=l*b;
    p=2*(l+b);
    v=l*b*h;
    printf("\narea is: %d,  \nperimeter is: %d,  \nvolume is: %d",a,p,v);

}
