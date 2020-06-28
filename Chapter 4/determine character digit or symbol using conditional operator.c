/* Take a character as an input.
Determine if the character is a capital letter, a small letter, a digit or a special symbol using conditional operator */

#include<stdio.h>
int main()
{
    int ch;
    printf("Enter a character: ");
    scanf("%d",&ch);

    (ch>=65 && ch<=90)? printf("Uppercase Alphabet"):(ch>=90 && ch<=122)?printf("Lowercase Alphabet"):(ch>=48 && ch<=57)? printf("Digit"):printf("Special Symbol");
}
