#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

short n1, n2,out;

int main(){
    scanf("%hd %hd",&n1, &n2);
    
    short min = n1<n2?n1:n2;

    for (short i = 1; i <= min; i++)
    {
        if ((n1 % i == 0) && (n2 % i == 0))
        {
            out = i;
            break;
        }
    }
    printf("%d\n",out);
    
    return 0;
}