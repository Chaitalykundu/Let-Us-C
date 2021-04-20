/* Author : Chaitaly Kundu
   Date : 20-04-21 **/

/* WAP to calculate the BMI rate */

#include<stdio.h>

int main()
{
    int w,h, BMI;
    printf("Enter the weight in kg and height in meter: ");
    scanf("%d %d", &w, &h);

    BMI = w/(h*h);

    if(BMI < 15)
        printf("\nStarvation");
    else if(BMI >= 15.1 && BMI <= 17.5)
        printf("\nAnorexic");
    else if(BMI >= 17.6 && BMI <= 18.5)
        printf("\nAUnderweight");
    else if(BMI >= 18.6 && BMI <= 24.9)
        printf("\nIdeal");
    else if(BMI >= 25 && BMI <= 29.9)
        printf("\nOverweight");
    else if(BMI >= 300 && BMI <= 30.9)
        printf("\nObese");
    else
        printf("\nMorbidly Obese");
}
