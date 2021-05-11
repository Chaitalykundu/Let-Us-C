/*  Author : Chaitaly Kundu
    Date: 30th April, 2021 */

/* Ramanujan Number is the smallest number that can be expressed as sum of two cubes in two different ways.
   WAP to print all such numbers up to a reasonable limit  */

#include<stdio.h>

int main()
{
    int i,num,x,y,count;
    num=30000;
    //for loop for range (1-30000)
    for(i=1;i<=num;i++)
    {
        count=0;
        for(x=1;x*x*x<i;x++)
        {
            //for-loop for finding Ramanujan number
            for(y=x;x*x*x+y*y*y<=i;y++)
            {
                //list all the numbers
                if(x*x*x+y*y*y==i)
                {
                  count++;

                }
            }
        }
        if(count==2)
        {
            printf("%d\n",i);
        }
    }
}