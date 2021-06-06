/* Author : Chaitaly Kundu
Date : 5th June, 2021 */


/* Enter a decimal number. Convert it in binary */


#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter a decimal number: ");
    scanf("%d",&n);

    int i=0, bin_digit, num=0;
    while(n>0){
        bin_digit = n%2;
        num = num + (bin_digit * pow(10,i));
        n = n/2;
        i++;
    }
    printf("%d",num);
    return 0;
}