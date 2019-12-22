#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float s,area;
    printf("\nEnter the lengths of 3 sides: ");
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\nArea is: %f", area);
}
