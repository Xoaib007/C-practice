# C-practice
Learning and practicing C

```C
# include <stdio.h>

int main(void)
{
    printf("hello,mars\n");
}
```
###

A very basic codeblock of C. To run this code, we have to run three command in terminal.
```
$code hello.c
$make hello
$./hello
```

## Variable

```C
# include <stdio.h>
# include <cs50.h>

int main(void)
{
    string name = get_string("Whats your name?");
    printf("hello,%s\n", name);
}
```

## For loop
## While loop
## Do...While loop


## Make a block

```C
# include <stdio.h>
# include <cs50.h>

int main(void)
{
    const int n = get_int("size:");
    for (int i = 0 ; i < n ; i++)
    {
        for (int j = 0 ; j < n ; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
```
