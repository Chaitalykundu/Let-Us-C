#include<stdio.h>
int main()
{
    int ch;

    printf("Enter any  number: ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            printf("\nI'm Case 1");
            break;
        case 2:
            printf("\nI'm Case 2");
            break;
        case 3:
            printf("\nI'm Case 3");
            break;
        default:
            printf("\nI'm in default");

    }
}
