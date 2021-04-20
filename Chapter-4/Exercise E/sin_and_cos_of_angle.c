/* Author : Chaitaly Kundu
   Date : 20-04-21 **/

/* WAP to receive value of an angle in degrees and check whether sum of squares of sine and cosine of this angle is equal to 1 */

#include<stdio.h>
#include<math.h>

int main()
{
    int x, sum;
    printf("\nEnter the angle: ");
    scanf("%d",&x);

    x= x*3.14 / 180;

    sum = pow(sin(x),2) + pow(cos(x),2);

    if(sum==1)
        printf("\nSum is equal to 1 ");
    else
        printf("\\nSum is not equal to 1");

    return 0;
}
