#include<stdio.h>

int main(void)
{
    int choose;
    printf("1. check balance\n");
    printf("2. withdraw Money\n");
    printf("3. Deposit Money\n");
    printf("4. Exit\n");

    scanf("%d", &choose);

    switch(choose)
    {
        case 1:
        printf("checking balance...\n");
        break;
        case 2:
        printf("withdrawing Money...\n");
        break;
        case 3:
        printf("Depositing Money...\n");
        break;
        case 4:
        printf("Thank you!...\n");
        break;
        default:
        printf("You are on wrong turf buddy, try again");
    }

}
// it simply askes the user to give the inpt and access the service