/* Author : Chaitaly Kundu
Date : 22th June, 2021 */


/* Enter a number. Turn off its nth bit */


#include<stdio.h>
#include<math.h>

int main(){
    int n, num;

        // Input the number
    printf("Enter a number : ");
    scanf("%X", &num);

        // convert into binary
    int i=0, bin_digit, bin_num=0, t=num;

    while(num>0){
        bin_digit = num%2;
        bin_num = bin_num + (bin_digit * pow(10,i));
        num = num/2;
        i++;
    }
    printf("\n%Xs binary number is %d", t, bin_num);

        // Input the bit to be checked
    printf("\nEnter the bit no which to be turned off: ");
    scanf("%d",&n);

        // calculate mask;
    int mask;
    mask = 1 << n;

        // Complement of mask
    mask = ~mask;

    printf("\nmask is %d", mask);


        // mask in binary (It's not required. just for check)
    int j=0, bd, bn=0, p=mask;
    while(p>0){
        bd = p%2;
        bn = bn + (bd * pow(10,j));
        p = p/2;
        j++;
    }
    printf("\nmask in binary is %d", bn);



        // Check ON or OFF
    int bit;
    bit = t & mask;
    if(bit == 0)
        printf("\nbit no %d is OFF", n);
    else
        printf("\nbit no %d is ON",n);

    printf("\nNow the number is %d", t);
    return 0;
}