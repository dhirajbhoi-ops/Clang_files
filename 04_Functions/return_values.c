#include<stdio.h>

int getBonusPercentage(int rating);

float calculateBonus(int bonusPercentage, int salary);

int calculateFinalSalary( float bonus, int salary);


int main(void)
{
    int basic_salary;
    int rating;

    printf("Enter your Salary:");
    scanf("%d", &basic_salary);

    printf("Enter your Performance Rating:");
    scanf("%d", &rating);
    
    float bonus = calculateBonus(getBonusPercentage(rating), basic_salary);
    printf("Basic Salary: %d\n", basic_salary);
    printf("Bonus: %.2f\n", bonus);
    printf("Final Salary: %d\n", calculateFinalSalary(bonus, basic_salary ));

}                   

// this here is simply giving us the percent bonus on rating 
int getBonusPercentage(int rating)
{
    if (rating == 5)
    {
        // printf("You have received 20%% bonus\n");
        return 20;
    }
    else if (rating == 4)
    {
        // // printf("You receive 15%% bonus\n");
        return 15;
    }
    else if (rating == 3)
    {
        // printf("You receive 10%% bonus\n");
        return 10;
    }
    else if (rating == 2 )
    {
        // printf("you get 5%% bonus \n");
        return 5;
    }
    else if (rating == 1)
    {
        // printf("No bonus for you\n");
        return 0;
    }
    else 
    {
        printf("invalid input\n");
        return -1;
    }
}

float calculateBonus(int bonusPercentage, int salary)
{
  return ((float)bonusPercentage/100)* salary;
}
int calculateFinalSalary( float bonus, int salary)
{
    return bonus + salary;
}
