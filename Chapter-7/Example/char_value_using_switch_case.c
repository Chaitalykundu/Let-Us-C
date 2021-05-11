#include<stdio.h>
int main()
{
    char ch;

    printf("Enter any alphabet: ");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':
            printf("\nI'm Case a");
            break;
        case 'A':
            printf("\nI'm Case A");
            break;
        case 'C':
            printf("\nI'm Case C");
            break;
        default:
            printf("\nI'm in default");
    }
    return 0;
}
