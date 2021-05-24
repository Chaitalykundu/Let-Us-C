/* Author : Chaitaly Kundu
Date : 24-05-21 */


/* Enter a number. Replace 0 with 5 and print the number */


#include<stdio.h>
#include<math.h>

int convertFive(int n)
    {
    //Your code here
        int d, num=0, i=1;
        while(n>0)
        {
            d = n % 10;
            if(d == 0)
                d=5;

            num = num + d * i;
            n = n/10;
            i*=10;
        }
        return num;
    }


int main()
{
    int n, number;
    printf("Enter a no: ");
    scanf("%d",&n);

    number = convertFive(n);
    printf("%d",number);
    return 0;
}
