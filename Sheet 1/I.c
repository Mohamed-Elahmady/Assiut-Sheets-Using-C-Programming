#include <stdio.h>
#include <stdlib.h>

unsigned int x,y;

int main(void){
    scanf("%d %d",&x,&y);
    
    if (x >= y)
        printf("Yes");
    else
        printf("No");    
    
    return 0;
}
