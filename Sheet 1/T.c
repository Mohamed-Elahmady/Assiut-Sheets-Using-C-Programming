#include <stdio.h>
#include <stdlib.h>

long long A,B,C;
long long max,min,mid;

int main(void){
    scanf("%lld %lld %lld",&A,&B,&C);
    max = (A>=B && A>=C)? A : (B>=C && B>=A)? B : C;
    min = (A<=B && A<=C)? A : (B<=C && B<=A)? B : C;
    if ((A != max && A != min) || (A == B))
        mid = A;
    else if ((B != max && B != min) || (B == C))
        mid = B;
    else
        mid = C;
    
    printf("%lld\n%lld\n%lld\n\n",min,mid,max);
    printf("%lld\n%lld\n%lld\n",A,B,C);
    

    return 0;
}
