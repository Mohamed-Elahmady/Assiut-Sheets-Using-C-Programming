#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long long A,B,C,D;

int main(void){
    scanf("%lld %lld %lld %lld",&A,&B,&C,&D);

    if(B*log(A) > D*log(C))
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
