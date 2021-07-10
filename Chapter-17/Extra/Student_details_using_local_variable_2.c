/*  Author : Chaitaly Kundu
    Date: 11th July, 2021 */

/* print Student details using local variable */

#include<stdio.h>
#include<string.h>

struct student{
    int id;
    char full_name[30];      // using array
    float mark;
    char fav_character;
};

int main()
{

    struct student ani = {1, "Ani Paul", 8.7, 'A'};
    struct student bishal = {2, "Bishal Dubey", 8.7, 'B'};
    struct student chandan = {3, "Chandan Roy", 8.5, 'C'};

    printf("Ani's id no. %d\n", ani.id);
    printf("Ani's full name is %s\n", ani.full_name);
    printf("Ani got %.2f marks\n", ani.mark);
    printf("Ani's favourite character is %c\n",ani.fav_character);
    printf("\n\n");

    printf("Bishal's id no. %d\n", bishal.id);
    printf("Bishal's full name is %s\n", bishal.full_name);
    printf("Bishal got %.2f marks\n", bishal.mark);
    printf("Bishal's favourite character is %c\n", bishal.fav_character);
    printf("\n\n");

    printf("Chandan's id no. %d\n", chandan.id);
    printf("Chandan's full name is %s\n", chandan.full_name);
    printf("Chandan got %.2f marks\n", chandan.mark);
    printf("Chandan's favourite character is %c\n", chandan.fav_character);

    return 0;
}