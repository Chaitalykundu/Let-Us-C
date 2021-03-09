/* Take a character as an input. Determine if the character is a capital letter, a small letter, a digit or a special symbol  */

#include<stdio.h>
int main()
{
     char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);

    if(ch>=65 && ch<=90)
        printf("\nCharacter is a Capital letter");
    else if(ch>=97 && ch<=122)
        printf("\nCharacter is a Small letter");
    else if(ch>=48 && ch<=57)
        printf("\nCharacter is a Digit");
    else
        printf("\nCharacter is a Special Character");
    return 0;
}
