/*  Author : Chaitaly Kundu
    Date: 3rd May, 2021 */

/* Find out the output */

#include<stdio.h>
#include<ctype.h>

int main()
{
    char ch;
    ch = getchar();

    if(islower(ch))
        putchar(toupper((ch)));
    else
        putchar(tolower((ch)));

    return 0;
}