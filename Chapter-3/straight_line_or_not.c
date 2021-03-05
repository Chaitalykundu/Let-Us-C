/* Given three points are (x1,y1), (x2,y2), (x3,y3).
    write a program to check if all three points fall on one straight line */


#include<stdio.h>
int main()
{
    int x1,x2,x3,y1,y2,y3;
    printf("Enter the value of three points: ");
    scanf("%d %d %d %d %d %d",&x1,&x2,&x3,&y1,&y2,&y3);

    if(((x1-x2)/(x2-x3)== ((y1-y2)/(y2-y3))))
        printf("All three points fall on one straight line");
    else
        printf("All three points don't fall on one straight line");
}
