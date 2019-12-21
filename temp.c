#include<stdio.h>
void main()
{
    float f,c;
    printf("\nEnter temp in fahrenheit: ");
    scanf("%f",&f);
    c=((f-32)/9)*5;
    printf("temp in celcius=%f",c);
}
