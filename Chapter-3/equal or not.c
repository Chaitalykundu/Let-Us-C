/* Accept a 5 digit no. Write a program to obtain the reversed no.
    determine if the no. and it's reverse is equal or not*/

#include<stdio.h>
int main()
{
    int num,a,b,c,d,e, reverse;
    printf("Enter the 5 digit no.: ");
    scanf("%d",&num);

    /* reverse no */
    a=num/10000;
    b=(num%10000)/1000;
    c= (num%1000)/100;
    d=(num%100)/10;
    e=num%10;

    reverse=((10000*e)+(1000*d)+(100*c)+(10*b)+a);
    printf("\nThe reverse no is %d", reverse);

    /* Check equal or not */
    if(num==reverse)
        printf("\nThe no and it's reverse are equal");
    else
        printf("\nThe no and it's reverse are not equal");
}
