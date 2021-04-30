/*  Author : Chaitaly Kundu
    Date: 30th April, 2021 */

/* WAP to generate all pythagorean triples with side length less than or equal to 30 */

#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float x;

    for(a=1;a<=30;a++)
    {
        for(b=1;b<=30;b++)
        {
            for(c=1;c<=30;c++)
            {
                x = sqrt(pow(a,2) + pow(b,2));
                if(c == x)
                    printf("\n(%d, %d, %d)", a,b,c);
            }
        }
    }
    return 0;
}