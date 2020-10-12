/* Author: Chaitaly Kundu
Date: 12th October, 2020 */

/* > In a company an employee is paid as under:
    If his basic salary is less than rs 1500, then HRA is 10% basic salary and DA is 90% of basic salary.
    If his basic salary is either equal to or above rs 1500, then HRA is 500 rs and DA is 98% of basic salary.
    If the employee's salary is input through the keyboard, Write a program  to find his gross salary*/


#include<stdio.h>
int main()
{
    int basic_salary;
    float gross_salary, HRA, DA;
    printf("\nEnter the salary: ");
    scanf("%d",&basic_salary);

    if(basic_salary<1500)
    {
        HRA= basic_salary*10/100;
        DA= basic_salary * 90/100;
    }
     else if(basic_salary >= 1500)
    {
        HRA= 500;
        DA= basic_salary * 98/100;
    }
    gross_salary= basic_salary + HRA + DA;
    printf("Gross Salary is: %f", gross_salary);
}
