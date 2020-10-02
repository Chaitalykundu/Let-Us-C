include<stdio.h>
int main()
{
    int d,n,s=0;
    //Entering any 5 digit number by the user
    printf("\n enter a five digit no: ");
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10; //mod of the number
        s=s+d;
        n=n/10;
    }
    printf("\nSum: %d",s);// Printing Sum
}
