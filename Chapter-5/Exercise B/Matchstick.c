#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int printRandoms(int lower, int upper)
{
    int i;
    for (i = 0; i < 1; i++) {
        int num = (rand() % (upper - lower + 1)) + lower;
        return num;
    }
}

int main()
{
    int m = 21, p, c;

    while(m>0)
    {
        printf("\nNumber of Match sticks left = %d\n", m);
        printf("Pick 1 or 2 or 3 or 4 matches\n");
        scanf("%d", &p);

        if(p > 4 || p < 1)
            continue;

        m = m - p;

        printf("Number of matches left = %d\n", m);

        c = printRandoms(1,4);
        printf("out of which computer picked up %d\n", c);

        m = m - c;

    }

    if(m == 0)
        {
            printf("\nNumber of matches left = %d\n", m);
            printf("You lost the Game\n");
            break;
        }
    else
    {
        printf("Computer lost the Game\n");
    }
    return 0;
}
