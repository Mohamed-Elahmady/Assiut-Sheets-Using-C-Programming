#include <stdio.h>
#include <stdlib.h>

long long x,y;

int main(void){
    scanf("%lld %lld",&x,&y);
    printf("%lld + %lld = %lld\n%lld * %lld = %lld\n%lld - %lld = %lld",x,y,(x+y),x,y,(x*y),x,y,(x-y));
    return 0;
}
