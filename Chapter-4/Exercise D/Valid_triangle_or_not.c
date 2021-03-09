/* WWrite a program to check whether the triangle is valid or not */

#include<stdio.h>
int main()
{
    int a,b,c,greatest,smallest,sec_largest;
    printf("Enter the three sides of triangle: ");
    scanf("%d %d %d",&a, &b, &c);
    greatest=((a>b)?((a>c)?a:c):(b>c?b:c));
    smallest = ((a<b)?((a<c)?a:c):(b<c?b:c));
    sec_largest = ((a>b)?(a<c)?a:(b>c)?c:b);
    printf("Greatest no= %d",greatest);
    printf("smallest no= %d",smallest);
    printf("sec_largest no= %d",sec_largest);
    return 0;
}
