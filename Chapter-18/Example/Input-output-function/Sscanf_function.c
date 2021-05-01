/*  Author : Chaitaly Kundu
    Date: 1st May, 2021 */

/* sscanf function */

#include <stdio.h>
int main()
{
    char s [] = "3 red balls 2 blue balls";
    char str [10],str2 [10];
    int i;

    // %*s is used to skip a word
    sscanf (s,"%d %*s %*s %*s %s %s", &i, str, str2);

    printf ("%d %s %s \n", i, str, str2);

    return 0;
}