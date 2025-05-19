#include <stdio.h>
#include <stdlib.h>

long long x,y,z;

int main(void){
    scanf("%lld %lld %lld",&x,&y,&z);
    printf("%lld %lld",(x < y) && (x < z) ? x : (y < z) ? y : z,(x > y) && (x > z) ? x : (y > z) ? y : z)  ;
    
    return 0;
}
