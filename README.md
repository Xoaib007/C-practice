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

```C
// Prints an n-by-n grid of bricks, re-prompting user for positive integer

#include <cs50.h>
#include <stdio.h>

int get_size(void);
void print_grid(int n);

int main(void)
{
    int n = get_size();
    print_grid(n);
}

int get_size(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);
    return n;
}

void print_grid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

```
