#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string name[] = {"John", "David", "Muller"};
    string number[] = {"39-3486925084","39-3486925085","39-3486925086"};
    string email[] = {"john@email.com","david@email.com","muller@email.com"};

    string searchName = get_string("Search name: ");

    for(int i = 0 ; i < 3; i++)
    {
        if(strcmp(name[i],searchName) == 0)
        {
            printf("Number: %s \nEmail: %s \n", number[i], email[i]);
            return 0;
        }
    }
    printf("Sorry, this person doesnt exist in your contact-book. \n");

}
