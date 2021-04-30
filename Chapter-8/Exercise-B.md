# Point out the errors, if any, in the following programs

&nbsp;

## (a)

```c
#include<stdio.h>
int addmult(int,int)
int main()
{
    int i=3,j=4,k,l;
    k=addmult(i,j);
    l=addmult(i,j);
    printf("%d %d\n",k,l);
    return 0;
}
int addmult(int ii,int jj)
{
    int kk,ll;
    kk=ii+jj;
    ll=ii*jj;
    return(kk,ll);
}
```

> Error\
    &emsp; &emsp; * In prototype declaration, a ; will be at the end.\
    &emsp; &emsp; *  A function cannot return 2 or more value at a time.

&nbsp;

## (b

```c
#include<stdio.h>
void message();
int main()
{
    int a;
    a=message();
    return 0;
}

void message
{
    printf("Viruses are written in C\n");
    return ;
}
```

> Error: a value of type "void" cannot be assigned to an entity of type "int"

&nbsp;

## (c)

```c
#include<stdio.h>
int main()
{
    float a=15.5;
    char ch='C';
    printit(a, ch);
    return 0;
}
printit(a, ch)
{
    printf("%f %c\n",a,ch);
}
```

> Error: Function is not declared before defined

&nbsp;

## (d)

```c
#include<stdio.h>
void message();
int main()
{
    message();
    message();
    return 0;
}
void message();
{
    printf("Praise worthy and C worthy are synonyms\n");
}
```

> Error: In function definition no ; will be there

&nbsp;

## (e)

```c
#include<stdio.h>
int main()
{
    let_us_c()
    {
        printf("C is a Cimple minded language!\n");
        printf("C is a Cimple minded language!\n");
    }
    return 0;
}
```

> Error: One function cannot be defined within another function

&nbsp;

## (f)

```c
#include<stdio.h>
void message();
int main()
{
    massage(message());
    return 0;
}
void message()
{
    printf("It's a small world after all...\n");
}
```

> Error: void returned by inner call to message() cannot be passed to the outer call
