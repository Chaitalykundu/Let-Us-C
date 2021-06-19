/* Author : Chaitaly Kundu
Date : 20th June, 2021 */


/* Enter a decimal number. Convert it in binary */


#include<stdio.h>
#include<math.h>

int binary_to_decimal(int B)
{
    //code here
    int i=0, num=0, d ;
    while(B>0)
    {
        d = B % 10;
        num = num + (d * pow(2,i++));
        B = B/10;
    }
    return num;
}

int main()
{
    int n, num;
    printf("Enter a binary number: ");
    scanf("%d",&n);

    num = binary_to_decimal(n);

    printf("%d",num);
    return 0;
}