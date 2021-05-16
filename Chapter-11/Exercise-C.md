# State whether the following statements are True or False

&nbsp;

## (a)

> The value of an automatic storage class variable persists between various function invocations.

## Ans: False

```md
Explanation :
        The value of an ***static*** storage class variable persists between various function invocations.
```

&nbsp;

## (b)

> If the CPU registers are not available, the register storage class variables are treated as static storage class

## Ans: False

```md
Explanation :
        If the CPU registers are not available, the register storage class variables are treated as ***Automatic*** storage class
```

&nbsp;

## (c)

> The register storage class variables cannot hold float value

## Ans: True

&nbsp;

## (d)

> If we try to use register storage class for a float variable the compiler will report an error message

## Ans: False

```md
Explanation:
        If we try to use register storage class for a float variable the compiler ***won't*** report an error message. ***The compiler will treat this as Automatic storage class variable.***
```

&nbsp;

## (e)

> The default value for automatic variable is zero

## Ans: False

```md
Explanation :
        The default value for automatic variable is garbage
```

&nbsp;

## (f)

> The life of static variable is till the control remains within the block in which it is defined

## Ans: False

```md
Explanation :
        The life of static variable is value of the variable persists between different function calls
```

&nbsp;

## (g)

> If a global variable is to be defined, then the extern keyword is necessary in its declaration

## Ans: False

```md
Explanation :
        Since functions are visible throughout the program by default, the use of extern is not needed in function declarations or definitions. When extern is used with a variable, it's only declared, not defined.

```

&nbsp;

## (h)

> The address of register variable is not accessible

## Ans: True

```md
Explanation :
    because there is no such thing. Memory addresses describe memory locations.
```
