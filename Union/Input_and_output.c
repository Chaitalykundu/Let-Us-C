/* Author : Chaitaly Kundu
   Date : 13-07-2021*/


/* Memory map of union element . Print the address*/

#include<stdio.h>

union book{
    int a;
    char b;
    float c;
} var;

int main()
{
    var.a = 65;
    printf("a = %d\n", var.a);
    printf("b = %c\n", var.b);
    printf("c = %f", var.c);


    return 0;
}