/* in a company an employee is paid as under:
    if his basic salary is less than 1500, then HRA is 10% basic salary and DA is 90% of basic salary.
    if his basic salary is either equal to or more than 1500, then HRA is 500rs and DA is 98% of basic salary.
    Find his gross salary*/


#include<stdio.h>
int main()
{
    int basic_salary, HRA,DA;
    float gross_salary;
    printf("Enter the salary: ");
    scanf("%d",&basic_salary);

    if(basic_salary<1500)
    {
        HRA= basic_salary*10/100;
        DA= basic_salary * 90/100;
    }
    if(basic_salary >= 1500)
    {
        HRA= 500;
        DA= basic_salary * 98/100;
    }
    gross_salary= basic_salary + HRA + DA;
    printf("Gross Salary is: %f", gross_salary);
}
