#include <stdio.h>
#include <stdlib.h>

int v1;
long long v2;
char v3;
float v4;
double v5;

int main(void){
    scanf("%d %lld %c %f %lf",&v1,&v2,&v3,&v4,&v5);
    printf("%d\n%lld\n%c\n%g\n%g\n",v1,v2,v3,v4,v5);
    return 0;
}
