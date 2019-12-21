#include<stdio.h>
int main()
{
    int Eng, Maths, Phy, Chm, Comp, aggregate_marks;
    float percentage;
    printf("\nEnter the marks of Each subject: ");
    printf("\nEnglish: ");
    scanf("%d",&Eng);

    printf("\nMaths: ");
    scanf("%d",&Maths);

    printf("\nPhysics: ");
    scanf("%d",&Phy);

    printf("\nChemistry: ");
    scanf("%d",&Chm);

    printf("\nComputer: ");
    scanf("%d",&Comp);

    aggregate_marks= Eng+Maths+Phy+Chm+Comp;
    printf("\nAggregate mark is: %d", aggregate_marks);
    percentage=(aggregate_marks*100)/500;
    printf("\npercentage is: %f",percentage);
    return 0;

}
