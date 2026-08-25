#include<stdio.h>

int main(void)
{
    char grades;
    printf("enter your number(A-F),sir:");
    
    scanf("%c", &grades);
    
    if (grades == 'A')
    {
        printf("Excellent!\n");
    }
else if (grades == 'B')
{
    printf("you are good\n");
}
else if (grades == 'C')
{
    printf("You have to improve\n");
}
else if (grades == 'F')
{
        printf("you Have Failed!\n");
}
else
{
    while(1)
    {
        // need to see why it is printing, this particukar in 2 times
        printf("Enter the Grade again");
        
        scanf("%c", &grades);
        if (grades == 'S')
        {
            break;
        }
    }
    
}

}
// it simply prints the your performance using your grade