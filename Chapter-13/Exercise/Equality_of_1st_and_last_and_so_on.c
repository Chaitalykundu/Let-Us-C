/*  Author : Chaitaly Kundu
    Date: 6th May, 2021 */

/* If an array arr contains n elements, then WAP to check if arr[0] = arr[n-1], arr[1] = arr[n-2] and so on */

#include<stdio.h>

int main()
{
    int n, i;
    int arr[] = {1,2,3,4,5,6,4,3,2,1};

    n = sizeof(arr)/sizeof(arr[0]);

    for(i=0;i<n/2;i++)
    {
        if(arr[i] == arr[n-i-1])
            printf("\n%d and %d are equal", arr[i], arr[n-i-1]);
        else
            printf("\n%d and %d are not equal" ,arr[i], arr[n-i-1]);
    }
    return 0;
}
