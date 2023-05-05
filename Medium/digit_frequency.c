#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[1000];
    scanf("%s", s);
    int count = 0 ;
    for (int i = 0 ; i<10 ; i++)
    {
        for(int j = 0 ; j<strlen(s) ; j++)
        {
            if(s[j] - '0' == i)
            {
              count ++ ; 
            } 
        }
        printf("%d " , count);
        count = 0;
    }    
    return 0;
}
