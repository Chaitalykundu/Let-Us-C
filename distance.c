#include<stdio.h>
int main()
{
    float km, m, f, i, c;
    printf("\nEnter the distance in km: ");
    scanf("%f",&km);
    m= 1000 * km;
    f= 3.28084 * m;
    i= 12 *f;
    c=100000* km;
    printf("\ndistance in metre: %f \n> in feet: %f  \n> in inches: %f \n> in centimetre: %f", m,f,i,c);
    return 0;
}
