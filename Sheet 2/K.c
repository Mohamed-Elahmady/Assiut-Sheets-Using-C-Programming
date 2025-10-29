#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

short n;

int main(){
    scanf("%hd",&n);
    
    for (short i = 1; i <= n; i++)
    {
        if (n%i == 0){
            printf("%d\n",i);
        }
    }
    
    return 0;
}