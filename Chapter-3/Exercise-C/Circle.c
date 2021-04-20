/*  Author : Chaitaly Kundu
    Date : 20-04-21 */

/*  Given the coordinates (x,y)of the center of a circle and its radius.
    WAP to determine whether a points lies inside the circle or on the circle or outside the circle */

#include<stdio.h>
#include<math.h>

int main()
{
    int x,y,r;
    float distance,d;
    printf("Enter the radius and coordinates: ");
    scanf("%d %d %d",&r, &x, &y);

    distance = pow(x,2) + pow(y,2); // Let center of the circle is (0,0)
    d = pow(r,2);

    // Condition
    if(distance<d)
        printf("The point is inside the circle");
    else{
        if(distance>d)
            printf("The point is outside the circle");
        else
            printf("The point is on the circle");
    }
    return 0;
}
