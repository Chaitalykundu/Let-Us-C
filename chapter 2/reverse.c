/*accept a five-digit no and print the reverse of this number */
#include<stdio.h>
int main()
{
    int a,b,c,d,e,n,r=0;
    printf("Enter a 5 digit no.: ");
    scanf(" %d",&n);
    a=n/10000;
    b=(n%10000)/1000;
    c=(n%1000)/100;
    d=(n%100)/10;
    e=n%10;
    r=((10000*e)+(1000*d)+(100*c)+(10*b)+a);
    printf("reverse is: %d",r);
}
