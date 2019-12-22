#include<stdio.h>
int main()
{
    float km, m, f, i, c;
    printf("\Enter the distance in km: ");
    scanf("%f",&km);
    m= 1000 * km;
    f= 3.28084 * m;
    i= 12 *f;
    c=100000* km;
    printf("\ndistance in metre: %f", m);
    printf("\ndistance in feet: %f", f);
    printf("\ndistance in inches: %f", i);
    printf("\ndistance in centimetre: %f", c);
    return 0;
}


