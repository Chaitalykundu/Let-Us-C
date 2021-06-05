/* Author : Chaitaly Kundu
Date : 5th June, 2021 */


/* Enter a decimal number. Convert it in binary*/


#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("Enter a decimal number: ");
    scanf("%d",&n);

    int i=0, j, binarray[32];
    while(n>0){
        binarray[i] = n%2;
        n = n/2;
        i++;
    }
    for(j=i-1;j>=0;j--)
        printf("%d",binarray[j]);
    return 0;
}