/*  Author : Chaitaly Kundu
    Date: 6th May, 2021 */

/*25 numbers are enterer in an array. search a number.
 Write a program to find the number. If the number is present, display the number of times it appears in the array */

#include<stdio.h>


int search(int a[], int n, int k)
{
    int i, count;

    for(i=0;i<n;i++)
    {
        if(k == a[i])
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int a[10], n, i, k, result;

    printf("Enter the no of elements ");
    scanf("%d", &n);
    printf("Enter the elements ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter the element to be searched: ");
    scanf("%d",&k);
    result = search(a,n,k);
    printf("%d appears %d times", k, result);
    return 0;
}