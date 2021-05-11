/*  Author : Chaitaly Kundu
    Date: 11th May, 2021 */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int class, subject;

    printf("\nEnter the class: ");
    scanf("%d",&class);

    printf("\nEnter the number of subjects he has failed in: ");
    scanf("%d",&subject);

        switch(class)
        {
            case 1:
            {
                if( subject > 3)
                    printf("Grace mark is 0");
                else
                    printf("Grace mark is 5 per subject");
                break;
            }

            case 2:
            {
                if( subject > 2)
                    printf("Grace mark is 0 ");
                else
                    printf("Grace mark is 4 per subject");
                break;
            }

            case 3:
            {
                if( subject > 1)
                    printf("Grace mark is 0 ");
                else
                    printf("Grace mark is 5 per subject");
                break;
            }

            default:
            {
                printf("Invalid Class");
            }
        }
    return 0;
}