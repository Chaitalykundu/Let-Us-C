/*accept a five-digit no and print the sum of digits */
#include<stdio.h>
int main()
{
    int a,b,c,d,e,n,s=0;
    printf("Enter a 5 digit no.: ");
    scanf(" %d",&n);
    a=n/10000;
    b=(n%10000)/1000;
    c=(n%1000)/100;
    d=(n%100)/10;
    e=n%10;
    s=a+b+c+d+e;
    printf("sum is: %d",s);
}
