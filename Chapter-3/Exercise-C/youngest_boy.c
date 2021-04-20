/* accept the ages of ram, shyam and ajay and determine the youngest of three */


#include<stdio.h>
int main()
{
    int age_of_ram, age_of_shyam, age_of_ajay;
    printf("Enter the age of three boys: ");
    scanf("%d %d %d", &age_of_ram, &age_of_shyam, &age_of_ajay);

    if(age_of_ram < age_of_shyam && age_of_ram < age_of_ajay)
    {
        printf(" Ram is the youngest");
    }
    else if(age_of_shyam < age_of_ram && age_of_shyam < age_of_ajay)
    {
        printf(" Shyam is the youngest");
    }
    else
        printf(" Ajay is the youngest");
}
