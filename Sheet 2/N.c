#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

char sym;
short n;

int main(){
    scanf("%c %hd",&sym, &n);
    short arr[n];

    for (short i = 0; i < n; i++)
    {
        scanf("%hd",&arr[i]);
    }

    for (char i = 0; i < n; i++)
    {
        for (char j = 0; j < arr[i]; j++)
        {
            printf("%c",sym);
        }
        printf("\n");
    }

    return 0;
}