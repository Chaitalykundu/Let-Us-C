#include<stdio.h>
void message();
int main()
{
    message(message());
    return 0;
}
void message()
{
    printf("It's a small world after all...\n");
}

