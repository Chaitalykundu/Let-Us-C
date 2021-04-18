/* Author : Chaitaly Kundu
Date: 11th october, 2020; */

/*  If the marks obtained by a student in five different subjects are input through the keyboar.
Write a program to find out the aggregate marks and percentage marks obtained by the student.
Assume that the maximum marks that can be obtained by a student in each subject is 100 */

#include<stdio.h>

/* main function */
int main()
{
    float s1, s2, s3, s4, s5, aggregate_marks, percentage;
    printf("\nEnter the number of five different subjects: ");
    scanf("%f %f %f %f %f", &s1, &s2, &s3, &s4, &s5);


    /* aggregate marks and percentage marks calculate */
    aggregate_marks = s1 + s2 + s3 + s4 + s5;
    percentage = (aggregate_marks /5);

    printf("aggregate mark is %f and percentage is %f", aggregate_marks,percentage);
}
