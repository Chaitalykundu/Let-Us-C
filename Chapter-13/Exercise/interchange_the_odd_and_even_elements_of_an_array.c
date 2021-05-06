/* Write a program that interchange the odd and even elements of an array

Ex: i/p: a[] = {1,3,5,2,4,6}
    o/p: 3,1,2,5,6,4 */


#include<stdio.h>
int main()
{
    int a[10],i,temp;
    printf("Enter the elements ");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);

    printf("\nNew Array is: ");
    for(i=0;i<10;i+=2)
    {
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
    for(i=0;i<10;i++)
        printf("%d ",a[i]);

    return 0;
}
