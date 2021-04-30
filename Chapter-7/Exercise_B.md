# Point out the errors, if any

## (a)

```c
    #include<stdio.h>
    int main()
    {
        int suite = 1;
        switch(suite);
        {
            case 0;
                printf("Club\n");
            case 1;
                printf("Diamond\n");
        }
        return 0;
    }
```

> Error : After case 0  and case 1 **" : "** will be there in stead of **" ; "**

&nbsp;

&nbsp;

## (b)

```c
    #include<stdio.h>
    int main()
    {
        int temp;
        scanf("%d",&temp);
        switch(temp);
        {
            case (temp<=20):
                printf("Ooooooooohhhh! Damn Cool\n");
            case (temp > 20 && temp <= 30):
                printf("Rain Rain here again\n");
            case (temp > 30 && temp <= 40):
                printf("Wish I an on Everest\n");
            default:
                printf("Good old nagpur weather\n");
        }
        return 0;
    }
```

> Error : Case label can't be written like that

&nbsp;

&nbsp;

## (c)

```c
    #include<stdio.h>
    int main()
    {
        float a=3.5;
        switch(a);
        {
            case 0.5:
                printf("The art of C\n");
                break;
            case 1.5:
                printf("The spirit of C\n");
                break;
            case 2.5:
                printf("See through C\n");
                break;
            case 3.5:
                printf("Simply C\n");
        }
        return 0;
    }
```

> Error : float value can't be used in switch or case

&nbsp;

&nbsp;

## (d)

```c
    #include<stdio.h>
    int main()
    {
        int a=3, b=4, c;
        c= b-a;

        switch(c);
        {
            case 1||2:
                printf("God give me a chance to change things\n");
                break;
            case a||b:
                printf("God give me a chance to run my show\n");
                break;
        }
        return 0;
    }
```

> Error :  case a||b is incorrect
