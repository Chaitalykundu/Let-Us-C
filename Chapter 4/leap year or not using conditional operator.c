#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);

    ((year%4==0 && year%100!=0)?printf("Leap Year"):(year%400==0)?printf("Leap year"):printf("Not leap year"));
}
