/*  Author : Chaitaly Kundu
    Date: 5th May, 2021 */

/* print Student details using local variable */

#include<stdio.h>
#include<string.h>

struct student{
    int id;
    float mark;
    char fav_character;
    char full_name[30];
};

struct student ani , bishal, chandan;

int main()
{
    ani.id = 1;
    bishal.id = 2;
    chandan.id = 3;

    ani.mark = 8.7;
    bishal.mark = 6.8;
    chandan.mark = 9.6;

    ani.fav_character = 'z';
    bishal.fav_character = 'y';
    chandan.fav_character = 'x';

    strcpy(ani.full_name,"Ani Paul");
    strcpy(bishal.full_name,"Bishal Kumar");
    strcpy(chandan.full_name,"Chandan Roy");

    printf("Ani's i no. %d\n", ani.id);
    printf("Ani's full name is %s\n", ani.full_name);
    printf("Ani got %.2f marks\n", ani.mark);
    printf("Ani's favourite character is %c\n",ani.fav_character);
    printf("\n\n");

    printf("bishal's i no. %d\n", bishal.id);
    printf("bishal's full name is %s\n", bishal.full_name);
    printf("bishal got %.2f marks\n", bishal.mark);
    printf("bishal's favourite character is %c\n", bishal.fav_character);
    printf("\n\n");

    printf("chandan's i no. %d\n", chandan.id);
    printf("chandan's full name is %s\n", chandan.full_name);
    printf("chandan got %.2f marks\n", chandan.mark);
    printf("chandan's favourite character is %c\n", chandan.fav_character);

    return 0;
}