#include <stdio.h>
#include <stdlib.h>

unsigned long long x,y;

int main(void){
    scanf("%lld %lld",&x,&y);
    
    if (x % y == 0 || y % x == 0)
        printf("Multiples");
    else
        printf("No Multiples");    
    
    return 0;
}
