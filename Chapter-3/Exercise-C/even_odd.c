/* Check the number is even or odd */

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the no: ");
    scanf("%d",&num);
    if(num%2==0)
        printf("The no. is even");
    else
        printf("The no. is odd");
}
