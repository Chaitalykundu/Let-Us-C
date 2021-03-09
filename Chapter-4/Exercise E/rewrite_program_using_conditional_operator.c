/* Rewrite the program using conditional operators */

#include<stdio.h>
int main()
{
    float sal;

    printf("Enter the salary: " );
    scanf("%f",&sal);
    ((sal>=25000 && sal<=40000)? printf("Manager"):((sal>=15000 && sal<25000)?printf("Accountant"):printf("Clerk")));
    return 0;
}
