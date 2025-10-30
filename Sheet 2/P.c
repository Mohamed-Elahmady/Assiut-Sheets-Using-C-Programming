#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

short n;

int main(){
    scanf("%hd",&n);

    for (short i = 1; i <= n; i++)
    {
        for (short j = 1; j <= n-i+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}