#include<stdio.h>
// below here void times() is called as prototype
int need_n(void);
void times( int multi );

int main(void)
{
    int n = need_n();

    times( n);

}
int need_n(void)
{
    int n;

    do
    {
        printf("enter the number: ");
        scanf("%d", &n);
    }
    while( n <= 0);
    return n;

}
 void times(int multi)
 {
    for ( int i = 0 ; i < multi; i++)
    {
    printf("coward! \n");
    }
 }