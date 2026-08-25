#include<stdio.h>

int main(void)
{
    char name[10];
    int marks;
    printf("What might be your Name?\n");
    scanf(" %s", &name);
    printf("And what were your marks?\n");
    scanf(" %d", &marks);
    printf("Hello, Mr.%s\n", name);
    printf("You Have Scored %d marks\n", marks);
    
}
// here we got an input from the user and displayed it at the same time 