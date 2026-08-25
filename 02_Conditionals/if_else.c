#include<stdio.h>

int main(void)
{
    int marks;
    printf("enter your number,sir:");
    scanf("%d", &marks);
    if (marks>35)
    {
        printf("You have passed!\n");
    }
    else
    {
        printf("you Hvae failed!\n");
    }
}
// this program simply check if you have passed or failed using your marks