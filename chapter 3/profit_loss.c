/* accept cost price and selling price from keyboard.
 write a program to determine if the seller has made profit or incurred loss.
 also determine how much profit he made or loss he incurred */


#include<stdio.h>
int main()
{
    int cp,sp,profit,loss;
    printf("Enter the cost price: ");
    scanf("%d",&cp);
    printf("Enter the selling price: ");
    scanf("%d",&sp);

    if(cp<sp)
    {
        printf("\n He made profit");
        profit=sp-cp;
        printf("\nProfit= %d ",profit);
    }
    else if (cp>sp)
    {
        printf("\n He incurred loss");
        loss=cp-sp;
        printf("\n Loss= %d ",loss);
    }
    else
        printf("\nNeither profit nor loss");

}
