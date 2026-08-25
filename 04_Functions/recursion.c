#include<stdio.h>

int countdown(int n)
{
    if (n== 0){
        return 1;
    }
    else 
        return 7 + countdown(n-2);
    


}

int main()
{
    printf("%d\n", countdown(4));
    return 0;
}

