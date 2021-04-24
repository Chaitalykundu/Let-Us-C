/* Author : Chaitaly Kundu
Purpose : Learn C completely from Let us C
Date : 8th Jan, 2021 */


// Topic : Pointer


#include<stdio.h>

int main()
{
    int i = 12;
    int *j, **k;  // It indicates that it will contain any adderss
    j=&i; // *j=i
    k=&j; // hence k=&(&i), *k=j

    // Address of i in term of i
    printf("\n Address of i is %u", &i);

    // Address of i in term of j
    printf("\n Address of i is %u", j);   // Address of i = value of j (i.e. j=&i;)

    // Address of i in term of k
    printf("\n Address of i is %u", *k);   // as j=&i and *k=j

    // Address of j in term of j
    printf("\n Address of j is %u", &j);

    // Address of j in term of k
    printf("\n Address of j is %u", k);   // as k=&j


    // value of i in term of i
    printf("\n Value of i is %d",i);       // Value of i

    // value of i in term of j
    printf("\n Value of i is %d", *j);   // as *j=i

    // value of i in term of k
    printf("\n Value of i is %d", **k);   // as *k=j and *j=i

   // value of i in term of i using ddress of and pointer
    printf("\n Value of i is %d",*(&i));   // Value using pointer

    // value of j in term of i
    printf("\n Value of j is %u", &i);
    // value of j in term of j
    printf("\n Value of j is %d", j);

    // value of j in term of k
    printf("\n Value of j is %d", *k);

    // value of k in term of j
    printf("\n Value of k is %u", &j);

    // value of k in term of k
    printf("\n Value of k is %d", k);

    return 0;
}

