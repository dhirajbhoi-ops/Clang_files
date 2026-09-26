#include <stdio.h>
int main(void)
{
   int n;
   do 
   {
      printf("enter n: ");

      scanf("%d", &n);
   } while(n < 0);

   for (int i = 0 ; i < n ; i++)
   {
    printf("LOVE ME!\n");
   }
}