#include<stdio.h>

int main(void)
{
    int height;

    // it's yet to be infinte proof because if the user enters any alphabet it goes in infinte loop
    printf("Enter height: ");

    scanf("%d", &height);

    while(1)
    {
        if ( height <= 0 )
        {
            printf("Enter height: ");

            scanf("%d", &height);

            continue;
        }
        else
        {
            break;
        }
    }
    
    for (int i = 1 ; i <= height ; i++)
    {
        for (int j = i ; j <= height ; j++)
        {
            printf(" ");
        }
        for (int k = 1 ; k <= i ; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}