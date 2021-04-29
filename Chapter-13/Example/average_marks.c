/* Author: Chaitaly Kundu
Date: 5th dec, 2020 */

/* Write a program to find the average marks obtained by a class of 10 students in a test */

#include<stdio.h>
int main()
{
    int a[10], i, sum=0;
    float avg;
    printf("Enter marks: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        sum = sum + a[i];
    }
    printf("\nSum = %d", sum);
   // for(i=0;i<10;i++)

    avg = sum / 10;
    printf("\nAverage marks= %f",avg);
}
