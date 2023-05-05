#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int maxand=0,maxor=0,maxxor=0;
int and,or,xor;


void calculate_the_maximum(int n, int k) {
    for(int i=1 ; i<n ; i++)
    {
        for(int j=i+1 ; j<=n ; j++)
        {
            and = i&j;
            if(and>maxand && and<k)
            {
              maxand=and;  
            }
            or = i|j;
             if(or>maxor && or<k)
             {
               maxor=or;  
             }
            xor = i^j;
            if(xor>maxxor && xor<k)
            {
             maxxor=xor;   
            }
            }
    }
    printf("%d \n%d \n%d",maxand,maxor,maxxor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
