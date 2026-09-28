#include<stdio.h>

// below here void times() is called as prototype
void times( int multi );
int main(void)
{
    int n;
    
    printf("enter the number: ");

    scanf("%d", &n);

    times( n);

}
 void times(int multi)
 {
    for ( int i = 0 ; i < multi; i++)
    {
    printf("coward!\n");
    }
 }