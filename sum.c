include<stdio.h>
int main()
{
    int d,n,s=0;
    printf("\n enter a five digit no: ");
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        s=s+d;
        n=n/10;
    }
    printf("\nSum: %d",s);
}
