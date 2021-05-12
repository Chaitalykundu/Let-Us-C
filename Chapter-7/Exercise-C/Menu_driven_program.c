/*  Author : Chaitaly Kundu
    Date: 11th May, 2021 */

#include<stdio.h>
#include<stdlib.h>

int num;
int main()
{
    int choice;

    printf("\nEnter the number: ");
    scanf("%d",&num);


    while(1)   // while(0) means false. Program won't execute
    {
        printf("\n::::::Menu:::::\n");
        printf(" 1. Factorial:\n 2. Prime or not \n 3. Even or Odd \n 4. Exit ");

        printf("\nEnter any choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            {
                int i, factorial=1;
                for(i=1;i<=num;i++)
                {
                    factorial = factorial * i;
                }
                printf("Factorial of %d is %d", num, factorial);
                break;
            }

            case 2:
            {
                int i, count = 0;
                for(i=2;i<num;i++)
                {
                    if(num % i == 0)
                        count++;
                        break;
                }

                if(count == 0)
                    printf("Prime");
                else
                    printf("Not Prime");

                break;
            }

            case 3:
            {
                if(num % 2 == 0)
                    printf("The number is even");
                else
                    printf("The number is odd");
                break;
            }

            case 4:
                exit(1);

            default:
                printf("\nInvalid choice\n");
        }
    }
}
