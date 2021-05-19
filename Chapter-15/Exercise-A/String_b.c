/* Author: CHaitaly Kundu
Date: 19th May, 2021 */


#include<stdio.h>
int main()
{
    char s[] = "Get organized! Learn C!!";

    printf("%s\n",&s[2]);
    printf("%s\n",s);
    printf("%s\n",&s);
    printf("%c\n",&s[2]);

    return 0;
}

/* O/P:
        t organized! Learn C!!
        Get organized! Learn C!!
        Get organized! Learn C!!
        ↓

          */