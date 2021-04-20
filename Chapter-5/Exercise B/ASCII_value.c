/* Author : Chaitaly Kundu
Date: 21-04-2021 */

/* WAP to print all the ASCII values and their equivalent characters (from 0 to 255)*/

#include<stdio.h>
#include<math.h>

int main()
{
    int n=0;

    while(n<=255)
    {
        printf("\nASCII value -> %d and Character -> %c", n,n);
        n++;
    }
    return 0;
}
