/* Author: Chaitaly Kundu
Date: 09-04-2021 */

// reverse a number

#include<stdio.h>
#include<math.h>

int main()
{
    int n,d;
    printf("Enter the number: ");
    scanf("%d",&n);

    while(n>0)
    {
        d= n%10;
        printf("%d",d);
        n=n/10;
    }
    return 0;
}
