/* Author : Chaitaly Kundu
Date: 18-04-21 */

/*  If the marks obtained by a student in five different subjects are input through the keyboar.
Write a program to find out the aggregate marks and percentage marks obtained by the student.
Assume that the maximum marks that can be obtained by a student in each subject is 100 */

#include<bits/stdc++.h>
using namespace std;

/* main function */
int main()
{
    float s1, s2, s3, s4, s5, aggregate_marks, percentage;
    cout << "\nEnter the number of five different subjects: ";
    cin >> s1 >>  s2 >> s3 >> s4 >> s5;


    // calculate aggregate marks
    aggregate_marks = s1 + s2 + s3 + s4 + s5;

    // calculate percentage marks
    percentage = (aggregate_marks /5);

    cout <<"\nAggregate mark is " << aggregate_marks << "and percentage is " << percentage;
    return 0;
}
