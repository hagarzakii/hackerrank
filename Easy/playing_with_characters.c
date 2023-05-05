#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    scanf("%c", &ch);
    printf("%c\n", ch);
    char s[100];
    scanf("%s\n", s);
    printf("%s\n" , s);
    char sen[100];
    fgets(sen , 100 , stdin);
    printf("%s" , sen);
    return 0;
}