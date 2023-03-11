#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int roll[] = {1, 2, 3, 4, 5, 6, 7};
    int search = get_int("Search roll: ");

    for(int i = 0; i < 7 ; i++)
    {
        if(roll[i] == search)
        {
            printf("Found roll %i\n", search);
            return 0;
        }
        else if(roll[i] != search)
        {
            printf("Not found\n");
            return 1;
        }
    }
}
