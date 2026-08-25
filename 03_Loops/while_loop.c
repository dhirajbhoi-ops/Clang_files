#include<stdio.h>

int main(void)
{
    char password;
    while(1)
    {
        printf("Enter the the password: ");
        scanf(" %c", &password);
        if (password == 'H')
        {
            printf("You get the access!\n");
            break;
        }
        else
        {
            continue;
        }

    }
}