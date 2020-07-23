/* Write a program that interchange the odd and even elements of an array */

#include<stdio.h>
int main()
{
    int a[10],i,temp;
    printf("Enter the elements ");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);

    printf("\nNew Array is: ");
    for(i=0;i<10;i++)
    {
        if(((a[i]%2==0) && (a[i+1]%2!=0)) || ((a[i]%2!=0) && (a[i+1]%2==0)))
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    printf("%d ",a[i]);
    }
}
