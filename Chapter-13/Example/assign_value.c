/* Author: Chaitaly Kundu
Date: 2nd feb, 2021 */

// Topic: Array
/* Write a program to assign the array elements in contiguous memory location */

#include<stdio.h>

int element(int a[], int len, int *n)
{
    int i;

    for(i=0;i<len;i++)
    {
        *n=a[i];
        printf("\nMemory location is %u and array element is %d",&a[i],*n);
    }
}
int main()
{
    int a[]={11,22,33,44,55,99,88,77,66};
    int len,n;
    len=sizeof(a)/sizeof(a[0]);
    element(a,len, &n);
    return 0;
}
