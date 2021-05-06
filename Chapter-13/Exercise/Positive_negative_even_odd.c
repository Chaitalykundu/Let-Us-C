/*  Author : Chaitaly Kundu
    Date: 6th May, 2021 */

/*25 numbers are entered in an array.
 Write a program to find how many numbers are positive, negative, even and odd */

#include<stdio.h>

int main()
{
    int i, positive=0, negative=0, zero=0, even=0, odd=0 ;

    int a[10] = {1,2,-3,-4,0,0,6,7,-5,-9};
/*    printf("Enter the no of elements ");
    scanf("%d", &n);

    printf("Enter the elements ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);  */

    for(i=0;i<10;i++)
    {
        if(a[i]>0)
            positive++;
        else if(a[i]<0)
            negative++;
        else
            zero++;
    }
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
            even++;
        else
            odd++;
    }
    printf("Positive = %d\nNegative = %d\nZero = %d\nEven = %d\nOdd = %d", positive, negative, zero, even, odd);
    return 0;
}