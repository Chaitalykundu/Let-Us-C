/* Author : Chaitaly Kundu
Date: 22-04-2021 */

/*  WAP to print the multiplication table of the number entered by the user */

#include<stdio.h>

int main()
{
    int n, i, result;

    printf("Enter the number : ");
    scanf("%d",&n);

    for(i=1;i<=10;i++)
    {
        result = n * i;
        printf("\n%d * %d = %d", n,i,result);
    }
    return 0;
}
