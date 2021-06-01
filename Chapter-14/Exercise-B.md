# Find out the errors

&nbsp;

## (a)

```c
    #include<stdio.h>
    int main()
    {
        int twod[][] = {
                        2,4,
                        6,8
                        };

        printf("%d\n",twod);
        return 0;
    }
```

> Error.\
Explanation : column no. should be mentioned

&nbsp;

## (b)

```c
    #include<stdio.h>
    int main()
    {
        int three[3][] = {
                        2,4,3,
                        6,8,2,
                        2,3,1
                        };

        printf("%d\n",three[1][1]);
        return 0;
    }
```

> Error.\
Explanation : column no. should be mentioned
