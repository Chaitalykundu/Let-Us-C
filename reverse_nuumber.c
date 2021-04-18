/* Author: Chaitaly Kundu
Date: 09-04-2021 */

            //               INCOMPLETE
// reverse the number

#include<stdio.h>
#include<math.h>

int main()
{
    int T,i,N,d;
    scanf("%d",&T);
    for(i=0;i<T;i++)
        scanf("%d",&N);

    p=N/pow(10,N);
    for(i=0;i<p;i++)
    {
        d=N/p;
        N=N%p;

    }
}
