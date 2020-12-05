/* Write a program to copy the contents of one array into another in the reverse order */

#include<stdio.h>
int main()
{
    int a[10],i,temp;
    printf("Enter the elements ");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);

    printf("\nNew Reversed Array is: ");
    for(i=0;i<5;i++)
    {
        temp=a[i];
        a[i]=a[9-i];
        a[9-i]=temp;
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }

}

