# Find out the errors, if any

&nbsp;

## (a)

```c
    #include<stdio.h>
    int main()
    {
        long num = 2;
        printf("%d\n", num);
        return 0;
    }
```

&nbsp;

> No Error. \
O/P: 2

&nbsp;

&nbsp;

## (b)

```c
    #include<stdio.h>
    int main()
    {
        char ch = 200;
        printf("%d\n", ch);
        return 0;
    }
```

&nbsp;

> No Error.\
 O/P: -56

&nbsp;

&nbsp;

## (c)

```c
    #include<stdio.h>
    int main()
    {
        long float a = 25.345e454;
        unsigned double b = 25;
        printf("%lf %d\n", a, b);
        return 0;
    }
```

&nbsp;

> Error. \
Double cannot be unsigned, and float is "out of range" warning.

&nbsp;

&nbsp;

## (d)

```c
    #include<stdio.h>
    static int y;
    int main()
    {
        static int z;
        printf("%d %d\n", y, z);
        return 0;
    }
```

&nbsp;

> No Error. \
O/P: 0 0
