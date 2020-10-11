/* Author : Chaitaly Kundu
Date: 11th october, 2020; */

/*  If the marks obtained by a student in five different subjects are input through the keyboar.
Write a program to find out the aggregate marks and percentage marks obtained by the student.
Assume that the maximum marks that can be obtained by a student in each subject is 100 */

#include<stdio.h>

/* main function */
int main()
{
    int s1, s2, s3, s4, s5, aggregate_marks;
    float percentage;
    printf("\nEnter the number of five different subjects: ");
    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);


    /* aggregate marks and percentage marks calculate */
    aggregate_marks = s1 + s2 + s3 + s4 + s5;
    percentage = (aggregate_marks /5);

    printf("aggregate mark is %d and percentage is %f", aggregate_marks,percentage);
}