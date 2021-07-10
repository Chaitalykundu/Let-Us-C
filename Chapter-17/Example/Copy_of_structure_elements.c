/*  Author : Chaitaly Kundu
    Date: 5th May, 2021 */

/* Copying of structure elements */

#include<stdio.h>
#include<string.h>

struct student{             // student is structure tag
    int id;
    char full_name[30];     // using array
    float mark;
    char fav_character;
};

struct student ani , bishal, chandan, student3;

int main()
{

        // Declare and initialize variable
    struct student ani = {1, "Ani Pal", 8.7, 'A'};
    struct student bishal = {2, "Bishal Dubey", 8.7, 'B'};
    struct student chandan = {3, "Chandan Roy", 8.5, 'C'};


        // To copy strings we should use strcpy
    strcpy(ani.full_name,"Ani Paul");

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

    // Chandan's data is copied to student3
    student3 = chandan;
    printf(" Student3's Details\n\t id no. %d\n\t full name is %s\n\t marks %.2f\n\t favourite character is %c\n", student3.id, student3.full_name, student3.mark, student3.fav_character );
    return 0;
}