#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b ,index;
    char *num[]={"one","two","three","four","five","six","seven","eight","nine","even","odd"};
    scanf("%d\n%d", &a, &b);
  	for (int i=a; i<=b; i++) {
        index = i <= 9 ? i - 1 : 9 + i % 2;
        printf("%s\n", num[index]);
        }
    return 0;
}