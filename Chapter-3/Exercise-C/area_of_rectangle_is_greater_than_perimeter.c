/* write a program to find out if the area of a rectangle is greater than it's perimeter from length=5 and breadth=4  */


#include<stdio.h>
int main()
{
    int length, breadth,area , perimeter;
    printf("Enter the length and breadth of rectangle: ");
    scanf("%d %d",&length, &breadth);

    area= length * breadth;
    perimeter= (2*(length + breadth));

    if(area>perimeter)
        printf("Area is greater than perimeter");
    else
        {
            if(area<perimeter)
                printf("Area is lesser than perimeter");
            else
               printf("Area is equal to perimeter");
        }
    return 0;
}
