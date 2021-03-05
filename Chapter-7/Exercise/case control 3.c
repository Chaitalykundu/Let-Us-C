#include<stdio.h>
int main()
{
    int i=3;
    switch(i)
    {
        case 0:
            printf("Customers are dicey\n");
        case 1+0:
            printf("Markets are pricey\n");
        case 4/2:
            printf("Investors are moody\n");
        case 8%5:
            printf("At least employees are good\n");
    }
    return 0;
}

/* o/p: At least employees are good

*/
