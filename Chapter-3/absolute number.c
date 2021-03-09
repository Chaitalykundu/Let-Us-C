/* Write a program to find the absolute value of a number  */
/* An absolute value of a number is the distance of this number from 0.
Ex: he absolute value of 5 is 5. The distance from 5 to 0 is 5 units.
The absolute value of 5 is 5. The distance from 5 to 0 is 5 units */

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

    printf("Absolute Value of %d is %d\n",i,j);
    return 0;
}
