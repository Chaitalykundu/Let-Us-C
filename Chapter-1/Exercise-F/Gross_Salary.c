/* Author : Chaitaly Kundu
Date: 9th october, 2020 */

/* Ramesh's basic salary in input through the keyboard.
His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary.
Write a program to calculate his gross salary */

#include<stdio.h>

/* main function */
int main()
{
    float gross_salary, basic_salary, dearness_allowance, house_rent_allowance;
    printf("Enter the basic salary: ");
    scanf("%f", &basic_salary);


    /* dearness allowance and house rent allowance calculate */
    dearness_allowance = basic_salary * 40 /100;
    house_rent_allowance = basic_salary * 20 /100;
    

    /* gross salary calculate */
    gross_salary = basic_salary - (dearness_allowance + house_rent_allowance);
    printf("Gross salary is %f", gross_salary);
    return 0;
}