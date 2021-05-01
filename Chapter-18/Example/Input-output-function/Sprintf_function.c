/*  Author : Chaitaly Kundu
    Date: 1st May, 2021 */

/* sprintf function
   At first it stores the values in a character array and then display the array */

#include <stdio.h>
int main()
{
    int  i = 10;
    float j = 20.2;
    char ch = 'C';
    char a[30];
    // printf(" %d %f %c\n", i, j, ch);
    sprintf(a, " %d %f %c", i, j, ch);
    puts(a);

    return 0;
}