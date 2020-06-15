/* A company insures its drivers in the following case
    --- if the driver is married.
    --- if the driver is unmarried male & above 30 years of age
    --- if the driver is unmarried female & above 25 years of age.
    In all other cases, the driver is not insured.
    The married status, sex and age are inputs.
    Write a program to determine whether the driver should be insured or not. */
/* Using nested if-else */

#include<stdio.h>
int main()
{
    char marriage_status, sex;
    int age;
    printf("Enter marriage_status, sex, age: ");
    scanf("%c %c %d", &marriage_status, &sex, &age);

    if(marriage_status == 'M')
        printf("the driver should be insured");
    else
    {
        if(sex=='M')
        {
            if(age>=30)
                printf("the driver should be insured");
            else
                printf("the driver should not be insured");
        }
        else
        {
            if(sex=='F')
            {
                if(age>=25)
                    printf("the driver should be insured");
                else
                    printf("the driver should not be insured");
            }
        }
    }
}
