/* Author : Chaitaly Kundu
Purpose : Learn C completely from Let us C, Complete #challengeAnshika
Date : 8th Jan, 2021 */


// Topic : Pointer


#include<stdio.h>

int main()
{
    int i = 12;
    int *j;  // It indicates that it will contain any adderss
    j=&i;
    printf("\n Address of i is %u", &i);   // Address of i (i.e. value of j)
    printf("\n Address of i is %u", j);   // Address (as j=&i;)

    printf("\n Value of j is %d",j);       // Value of j (i.e. address of i = &i)
    printf("\n Address of j is %u", &j);   // Address of j

    printf("\n Value of i is %d",i);       // Value of i
    printf("\n Value of i is %d", *j);   // Value using pointer
    printf("\n Value of i is %d",*(&i));   // Value using pointer

    return 0;
}
