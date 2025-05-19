#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int x,y;

int main(void){
    scanf("%d %d",&x,&y);
    
    printf("floor %d / %d = %.0f\nceil %d / %d = %0.f\nround %d / %d = %.0f",x,y,floor((float)x/y),x,y,ceil((float)x/y),x,y,round((float)x/y));
    
    return 0;
}
