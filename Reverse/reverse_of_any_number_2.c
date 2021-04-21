
/* Author: Chaitaly Kundu
Date: 21-04-2021 */

// reverse a number

#include<stdio.h>
#include<math.h>

int main()
{
    int n, digit, reverse=0;
    printf("Enter the number: ");
    scanf("%d",&n);

    while(n>0)
    {
        digit = n%10;
        reverse = reverse *10 + digit;
        n = n/10;
    }
    printf("%d", reverse);
    return 0;
}
