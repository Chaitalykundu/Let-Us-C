# What will be the output of the following programs

## (a)

&nbsp;

```c
    #include<stdio.h>
    void display();
    int main()
    {
        printf("Learn C\n");
        display();
        return 0;
    }

    void display()
    {
        printf("Followed by C++, C# and Java!\n");
        main();
    }
```

> Output: \
&nbsp; &nbsp; &nbsp; &nbsp; Learn C\
&nbsp; &nbsp; &nbsp; &nbsp; Followed by C++, C# and Java!\
&nbsp; &nbsp; &nbsp; &nbsp; Learn C\
&nbsp; &nbsp; &nbsp; &nbsp; Followed by C++, C# and Java!\
&nbsp; &nbsp; &nbsp; &nbsp; Learn C\
&nbsp; &nbsp; &nbsp; &nbsp; Followed by C++, C# and Java!\
&nbsp; &nbsp; &nbsp; &nbsp; Learn C\
&nbsp; &nbsp; &nbsp; &nbsp; Followed by C++, C# and Java!\
&nbsp; &nbsp; &nbsp; &nbsp; Learn C\
&nbsp; &nbsp; &nbsp; &nbsp; Followed by C++, C# and Java!\
&nbsp; &nbsp; &nbsp; &nbsp; ............ \
&nbsp; &nbsp; &nbsp; &nbsp; ............ \
&nbsp; &nbsp; &nbsp; &nbsp; ............ \
&nbsp; &nbsp; &nbsp; &nbsp; Infinity times

&nbsp;

## (b)

&nbsp;

```c
    #include<stdio.h>
    int check(int);
    int main()
    {
        int i=45,c;
        c=check(i);
        printf("%d\n",c);
        return 0;
    }
    int check(int ch)
    {
        if(ch>=45)
            return (100);
        else
            return (10 * 10);
    }
```

> ### Output: 100
