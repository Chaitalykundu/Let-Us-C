/* accept the marks of 5 different subjects.
    percentage above or equal to 60- first division
    percentage between 50 and 59- second division
    percentage between 40 and 49- third division
    percentage less than 40- fail */

/* Using only if statement */

#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5, marks;
    printf("Enter the marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &s1,&s2,&s3,&s4,&s5);

    marks= (s1+s2+s3+s4+s5)/5;
    if(marks >= 60)
        printf("\nFirst division");
    if(marks >= 50 && marks <= 59)
        printf("\nSecond division");
    if(marks >= 40 && marks <= 49)
        printf("\nThird division");
    if(marks < 40)
        printf("\nFail");

}
