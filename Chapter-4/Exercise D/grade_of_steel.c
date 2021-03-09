/* A certain grade of steel is graded according to the following conditions:
    i) Hardness must be greater than 50
    ii) Carbon content must be less than 0.7
    iii) Tensile strength must be greater than 5600

 The grade are as follows:
    a)Grade is 10 if all three conditions are met
    b)Grade is 9 if (i) and (ii) conditions are met
    c)Grade is 8 if (ii) and (iii) conditions are met
    d)Grade is 7 if (i) and (iii) conditions are met
    e)Grade is 6 if only one condition is met
    f)Grade is 5 if none of the conditions are met */


#include<stdio.h>
int main()
{
    float hardness, carbon, tensile;
    printf("Enter the steel: ");
    scanf("%f %f %f",&hardness,&carbon,&tensile);

    if(hardness>50 && carbon<0.7 && tensile>5600)
        printf("Grade is 10");
    else if(hardness>50 && carbon<0.7 && tensile<=5600)
        printf("Grade is 9");
    else if(hardness<=50 && carbon<0.7 && tensile>5600)
        printf("Grade is 8");
    else if(hardness>50 && carbon>0.7 && tensile>5600)
        printf("Grade is 7");
    else if(hardness>50 || carbon<0.7 || tensile>5600)
        printf("Grade is 6");
    else
        printf("Grade is 5");

}
