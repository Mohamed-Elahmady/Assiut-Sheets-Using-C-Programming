#include <stdio.h>
#include <stdlib.h>

short n = 0;

int main(){
    scanf("%d",&n);

    for (short i = 1; i <= n; i++)
    {
        printf("%d\n",i);
    }
    
    return 0;
}