/*  Author : Chaitaly Kundu
    Date: 4th May, 2021 */

/*  */

#include<stdio.h>
#include<string.h>

struct student{
    int id;
    float mark;
    char fav_character;
    char full_name[30];
};

int main()
{
    struct student ani , bishal, chandan;
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

    printf("Ani's full name is %s\n", ani.full_name);
    printf("Ani got %f marks\n", ani.mark);

    return 0;
}