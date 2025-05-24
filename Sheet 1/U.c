#include <stdio.h>
#include <stdlib.h>

double num;

int main(void){
    scanf("%lf",&num);
    if(num == (int)num)
        printf("int %d\n",(int)num);
    else
        printf("float %d %g",(int)num,(num-(int) num));

    return 0;
}
