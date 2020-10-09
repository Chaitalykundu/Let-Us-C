
# Point out the errors, if any, in the following programs

# **Ans:-**

## (a)

``` C
int main()
{
    int a, float b, int c;
    a=25, b=3.24, c=a+b*b-35;
}
```

> ### Error: We can't write multiple datatype in one line separating by Commas. We've to use a statement terminator i.e ; after the datatypes. Like: int a; float b; int c; and all

&nbsp;

## (b)

``` C
#include<stdio.h>
int main()
{
    int a=35; float b=3.24;
    printf("%d %f %d", a,b+1.5,235)
}
```

> ### No Error

&nbsp;

## (c)

``` C
#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d", a,b,c);
}
```

> ### Error: in scanf  function, there will be & sign before variable (a,b,c)

&nbsp;

## (d)

``` C
#include<stdio.h>
int main()
{
    int m1, m2, m3
    printf("Enter values of marks in 3 subjects")
    scanf("%d %d %d", &m1, &m2, &m3)
    printf("You entered %d %d %d",m1, m2, m3)
}
```

> ### There will be statement terminator in every line
