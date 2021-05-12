#include <stdio.h>
  
int countDigits(int n)
{
   //Your code here
   int d, count=0;
    if(n == 0)
        return 0;
    while(n>0)
    {
            d = n % 10;
            n = n / 10;
            count = count +1;
    }
    return count;
}

int main()
{
    int num,  result;
    printf("\nEnter the number: ");
    scanf("%d",&num);
    result = countDigits(num);
    printf("\n%d", result);

    return 0;
}