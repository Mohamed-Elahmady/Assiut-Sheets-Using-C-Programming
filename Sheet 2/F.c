#include <stdio.h>
#include <stdlib.h>

short n;

int main(){
    scanf("%hd",&n);
    for (char i = 1; i <= 12; i++)
    {
        printf("%d * %d = %d\n", n, i, (n * i));
    }
    return 0;
}