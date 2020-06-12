/* A company insures its drivers in the following case
    --- if the driver is married.
    --- if the driver is unmarried male & above 30 years of age
    --- if the driver is unmarried female & above 25 years of age.
    In all other cases, the driver is not insured.
    The married status, sex and age are inputs.
    Write a program to determine whether the driver should be insured or not. */


#include<stdio.h>
int main()
{
    int marriage_status, sex, age;
    printf("Enter marriage_status, sex, age: ");
    scanf("%c %c %d", &marriage_status, &sex, &age);

    if((marriage_status == 'M')||(marriage_status == 'U' && sex == 'M' && age >= 30)
        ||(marriage_status == 'U' && sex == 'F' && age >= 25))
        printf("the driver should be insured");
    else
        printf("the driver should not be insured");
}
