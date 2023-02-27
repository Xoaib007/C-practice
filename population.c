#include <stdio.h>
#include <cs50.h>

int get_current(void);
int get_goal(int get_current);

int main(void)
{
    int current = get_current();
    int goal = get_goal(current);


    int year = 0;
    while(current < goal)
    {
        current += current / 12;
        year++;
    }

    printf("%i years need to reach the goal population.\n", year);
}

int get_current(void)
{
    int n;
    do
    {
        n = get_long("Current population: ");
    }
    while (n < 9);
    return n;
}

int get_goal(int get_current)
{
    int n;
    do
    {
       n = get_long("Goal population: ");
    }
    while (n <= get_current);
    return n;
}
