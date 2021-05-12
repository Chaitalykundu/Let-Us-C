
# Find out the errors, if any

## (a)

```c
#include<stdio.h>

void pass(int , int);

int main()
{
    int i=135, a=135, k;
    k= pass(i, a);
    printf("%d\n", k);
    return 0;
}
void pass(int j, int b);
int c;
{
    c = j + b;
    return (c);
}
```

> ### ANS: &nbsp; Error: there will be a { } in func definition

&nbsp;

&nbsp;

## (b)

```c
#include<stdio.h>

void jiaayjo(int , int);

int main()
{
    int p = 23, f = 24;
    jiaayjo(&p, &f);
    printf("%d %d\n", p,f );
    return 0;
}
void jiaayjo(int q, int g)
{
    q = q + q;
    g = g + g;
}
```

> ### ANS: &nbsp; Error: pointer is not mentioned

&nbsp;

&nbsp;

## (c)

```c
#include<stdio.h>

void check(int);

int main()
{
    int k=35, z;
    z = check(k);
    printf("%d\n", z );
    return 0;
}
void check(m)
{
    int m;
    if(m>40)
        return 1;
    else
        return 0;
}
```

> ### ANS: &nbsp; Error: void can't return anything. And there will be type of m in function definition

&nbsp;

&nbsp;

## (d)

```c
#include<stdio.h>

void function(int *);

int main()
{
    int i=35, *z;
    z = function(&i);
    printf("%d\n", z );
    return 0;
}
void function(int *m)
{
    return(*m +2);
}
```

> ### ANS: &nbsp; Error: void can't return anything
