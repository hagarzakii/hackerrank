#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
   int n;
   scanf("%d", &n);
   for(int i = 0; i < n*2-1; i++) {
      for(int j = 0; j < n*2-1; j++) {
          int x;
          if(i<j)
          {
              x=i;
          }
          else
          {
              x=j;
          }
         if(x<n*2-1 -i)
         {
             x=x;
         }
         else
         {
             x=n*2-1 -i -1 ;
         }
         if(x<n*2-1 -j)
         {
             x=x;
         }
         else
         {
             x=n*2-1 -j -1 ;
         }
         printf("%d ", n - x);
      }
      printf("\n");
   }
    return 0;
}
