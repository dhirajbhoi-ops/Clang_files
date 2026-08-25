#include<stdio.h>

int main(void)
{
    int num1, num2;
    char op;
    printf("Enter your Entire operation(e.g. 1+1):");
    
    scanf("%d%c%d", &num1, &op, &num2);
    if (op == '+')
    {
        printf("The Addition is %d\n", num1+num2);
    }
    else if (op =='-')
    {
        printf("the difference is %d\n", num1-num2);
    }
    else if (op == '*')
    {
        printf("The product is %d\n", num1*num2);
    }
    else if (op == '/')
    {
        printf("the Division is %f\n", num1/(float)num2);
    }
    else{
        printf("try Again\n");
    }
}