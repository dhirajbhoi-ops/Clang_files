#include<stdio.h>

void add(int i , int j);

int main(void)
{
    // char name[10];
    // printf("enter your first name ");
    // scanf(" %s", name);
    add(10,20);
    
}
void add(int i , int j)
{
   int add = i + j ; 
    printf("addtion: %d\n", add);
}
