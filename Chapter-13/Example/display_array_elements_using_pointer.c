/* Author: CHaitaly Kundu
Date: 2nd feb, 2021 */

// Topic: Array 
/* Write a program to display the elements of an array */

#include<stdio.h>

int element(int a[], int len, int *n)
{
    int i;
    printf("Elements are: ");
    for(i=0;i<len;i++)
    {
        *n=a[i];
        printf("%d ",*n);
    }
}
int main()
{
    int a[]={1,2,3,4,5,6};
    int len,n;
    len=sizeof(a)/sizeof(a[0]);
    element(a,len, &n);
    return 0;
}