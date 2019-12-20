#include<stdio.h>
int main()
{
    float p,t,r,I;
    printf("\nEnter money: ");
    scanf("%f",&p);
    printf("\nEnter time: ");
    scanf("%f",&t);
    printf("\nEnter rate: ");
    scanf("%f",&r);
    I=(p*t*r)/100;
    printf("Interest is: %f",I);
}
