#include <stdio.h>
#include <stdlib.h>

long long a,b,c,d;

int main(void){
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    printf("Difference = %lld",((a*b)-(c*d)));
    return 0;
}
