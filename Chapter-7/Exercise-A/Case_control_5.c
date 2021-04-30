/*  Author : Chaitaly Kundu
    Date : 30th April, 2021 */
    
#include<stdio.h>
int main()
{
    int ch = 'a'+'b';
    switch(ch)
    {
        case 'a':
        case 'b':
            printf("You entered b\n");
        case 'A':
            printf("a as in ashar\n");
        case 'b'+'a':
            printf("You entered a and b\n");
    }
    return 0;
}

/* o/p: You entered a and b */