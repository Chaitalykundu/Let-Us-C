/* Write a program to find the absolute value of a number  */


#include<stdio.h>
int main()
{
    int i,j;
    printf("Enter the no: ");
    scanf("%d",&i);

    if(i>=0)
        j=i;
    else
        j=-i;

    printf("Absolute no is %d\n",j);
}
