#include<stdio.h>

int countdown(int n);

int main()
{
    printf("%d\n", countdown(4));
    return 0;
}


int countdown(int n)
{
        if (n== 1){
            return 1;
        }
        else 
            return 8 + countdown(n-1);
              
    
    
}