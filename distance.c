#include<stdio.h>
int main()
{
    float km, m, f, i, c;
    printf("\n Enter the distance between two cities in km: ");
    scanf("%f",&km);
    m= 1000 * km;
    f= 3.28084 * m;
    i= 12 *f;
    c=1000000* km;
    printf("\ndistance in metre: %ff", m);
    printf("\ndistance in feet: %f", f);
    printf("\ndistance in inches: %f", i);
    printf("\ndistance in centimetre: %f", c);
    return 0;
}

