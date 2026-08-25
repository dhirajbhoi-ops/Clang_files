#include<stdio.h>

int main(void)
{
    int rent = 1800;
    int light_bill = 200;
    int food = 2200;
    float provided = 3500;
    int total_expense = rent+light_bill+food;
    printf("%d\n", total_expense);
    printf("%f", (provided / total_expense)*100);
}
// this program simply uses different operators and operations using them