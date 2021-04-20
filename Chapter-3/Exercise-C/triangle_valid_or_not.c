/* Check if the triangle is valid or not.
    The triangle is valid if the sum of three angles  is equal to 180 */


#include<stdio.h>
int main()
{
    int a,b,c,sum;
    printf("Enter the 3 angles: ");
    scanf("%d %d %d", &a, &b, &c);

    sum=a+b+c;

    if(sum==180)
        printf("The triangle is valid ");
    else
        printf("The triangle is not valid ");
}
