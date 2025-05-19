#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned long long x,y;

int main(void){
    scanf("%lld %lld",&x,&y);
    printf("%lld",((x%10)+(y%10)));
    return 0;
}
