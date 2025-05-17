#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265358979323846264338327950288

double r;

int main(void){
    scanf("%lf",&r);
    printf("%.9f",(PI * pow(r,2)));
    return 0;
}
