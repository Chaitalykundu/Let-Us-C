/* Author: Chaitaly Kundu
   Date: 6th May, 2021 */


#include<stdio.h>

void InsertionSort(int a[], int n)
{
    int i, j, temp;
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}

void print_elements(int a[], int n)
{
    int e;
    for(e=0;e<n;e++)
    {
        printf("\t%d", a[e]);
    }
}
int main() {
	// your code goes here

	int n,i;
    printf("\nEnter the no of elements: ");
    scanf("%d",&n);

    int a[n];

    printf("\nElements are: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nBefore Sorting: ");
    print_elements(a,n);

    InsertionSort(a,n);

    printf("\nAfter Sorting: \t");
    print_elements(a,n);

	return 0;
}
