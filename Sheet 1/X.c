#include <stdio.h>
#include <stdlib.h>

long long A,B,C,D;
long long half1,half2;
int error = -1;

int main(void){
    scanf("%lld %lld %lld %lld",&A,&B,&C,&D);
    
    half1 = (A >= C)? A:C;
    half2 = (B <= D)? B:D;
    if(half1 <= half2)
        printf("%lld %lld",half1,half2);
    else
        printf("%d",error);

    return 0;
}
