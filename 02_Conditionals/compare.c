#include<stdio.h>

int main (void)
{
    int x;
    printf("enter x: ");
    
    scanf("%d", &x);

    int y;
    
    printf("enter y: ");

    scanf("%d", &y);

    if (x < y )
    {
        printf("x is the less than y \n ");
    }
    else if (x > y)
    {
        printf("y is less than x");
    }
    else
    {
        printf("both are equal");
    }
}