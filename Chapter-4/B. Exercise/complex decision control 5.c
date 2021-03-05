#include<stdio.h>
int main()
{
    int k,num=30;
    k=(num>5?(num<=10?100:200):500);
    printf("%d",num);
    printf("\n%d",k);
}


/* o/p: 30
        200*/
