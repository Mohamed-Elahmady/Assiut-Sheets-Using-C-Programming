#include <stdio.h>
#include <stdlib.h>

unsigned long long x;

int main(void){
    scanf("%lld",&x);
    
    printf("%lld",(x*(x+1))/2);
    
    return 0;
}
