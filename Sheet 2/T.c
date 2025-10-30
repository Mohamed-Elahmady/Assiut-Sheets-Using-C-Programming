#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

short n;

int main(){
    scanf("%hd",&n);

    for (short i = 1; i <= n; i++)
    {
        for (short j = 1; j <= (2*i)-1 + (n - i); j++)
        {
            if (j <= (n-i))
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}