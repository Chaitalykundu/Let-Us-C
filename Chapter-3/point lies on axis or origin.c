/* Given a point (x,y).
   Write a program to find if it lies on x-axis, y-axis or on the origin. */



#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the coordinates of the point: ");
    scanf("%d %d",&x,&y);

    if(x!=0 && y==0)
        printf("\nPoint lies on x-axis");
    else if(x==0 && y!=0)
        printf("\nPoint lies on y-axis");
    else if(x==0 && y==0)
        printf("\nPoint lies on the origin");
    else
        printf("\nplease give proper value");
}
