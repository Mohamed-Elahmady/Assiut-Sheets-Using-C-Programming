#include <stdio.h>
#include <stdlib.h>

long long A,B,C,D;

int main(void){
    scanf("%lld %lld %lld %lld",&A,&B,&C,&D);
    
    printf("%02lld",((((((A * B)%100) * C)%100) * D)%100));

    return 0;
}
