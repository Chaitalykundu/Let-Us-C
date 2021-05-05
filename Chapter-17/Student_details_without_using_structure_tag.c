/*  Author : Chaitaly Kundu
    Date: 5th May, 2021 */

/* print Student details without using structure tag */

#include<stdio.h>
#include<string.h>

struct {
    int id;
    float mark;
    char fav_character;
    char *full_name;
} ani , bishal;

int chandan()
{
    struct {
        int id;
        float mark ;
        char fav_character;
        char *full_name;
    }chandan;

    chandan.id = 3;
    chandan.mark = 9.6;
    chandan.fav_character = 'x';
    chandan.full_name = "Chandan Roy";

    printf("chandan's i no. %d\n", chandan.id);
    printf("chandan's full name is %s\n", chandan.full_name);
    printf("chandan got %.2f marks\n", chandan.mark);
    printf("chandan's favourite character is %c\n", chandan.fav_character);
}

int main()
{
    // ID
    ani.id = 1;
    bishal.id = 2;

    // Mark
    ani.mark = 8.7;
    bishal.mark = 6.8;

    // Fav character
    ani.fav_character = 'z';
    bishal.fav_character = 'y';

    // Full name
    ani.full_name = "Ani Paul";
    bishal.full_name ="Bishal Kumar";

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

    chandan();
    return 0;
}