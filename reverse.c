#include<stdio.h>
int main()
{
    int a,b,c,d,n,r=0;
    printf("\n enter a four digit no: ");
    scanf("%d",&n);
    a=n/1000;
    b=(n%1000)/100;
    c=(n%100)/10;
    d=n%10;
    r=d*1000+c*100+b*10+a;
    printf("\nREVERSE: %d",r);
}

