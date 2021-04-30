#include<stdio.h>
int main()
{
    char suite=3;
    switch(suite)
    {
        case 1:
            printf("Diamond\n");
        case 2:
            printf("Spade\n");
        default:
            printf("Heart\n");

    }
    printf("I thought one wears a suite\n");
    return 0;
}

/* o/p: Heart
        I thought one wears a suite

*/
