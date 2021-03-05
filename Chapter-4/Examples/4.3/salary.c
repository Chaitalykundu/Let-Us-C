#include<stdio.h>
int main()
{
    char gender;
    int years, qualification, salary;
    printf("Enter the Gender, years of service, qualification (0= G, 1= PG): ");
    scanf("%c %d %d", &gender, &years, &qualification);
    if((gender== 'm') && (years>=10) && (qualification==1))
        salary=15000;
    else if((gender== 'm') && (years>=10) && (qualification==0))
        salary=10000;
    else if((gender=='m') && (years<10) && (qualification==1))
        salary=10000;
    else if((gender== 'm') && (years<10) && (qualification==0))
        salary=7000;
    else if((gender== 'f') && (years>=10) && (qualification==1))
        salary=12000;
    else if((gender== 'f') && (years>=10) && (qualification==0))
        salary=9000;
    else if((gender== 'f') && (years<10) && (qualification==1))
        salary=10000;
    else if((gender== 'f') && (years<10) && (qualification==0))
        salary=6000;

    printf("\nSalary is %d", salary);
}
