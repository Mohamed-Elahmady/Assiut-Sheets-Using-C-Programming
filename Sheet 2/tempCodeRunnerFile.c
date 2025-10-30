#include <stdio.h>
#include <stdlib.h>

short n = 0;

int main(){
    scanf("%hd",&n);
    unsigned int arr[n];

    for (short i = 0; i < n; i++)
    {
        scanf("%u", &arr[i]);
    }

    for (short i = 0; i < n; i++)
    {
        while (arr[i] > 0)
        {
           printf("%u ", (arr[i] % 10));
           arr[i] /= 10;
        }
        
        if (arr[i] == 0)
        {
            printf("%u ", 0);
        }
        
        printf("\n");
    }
    
    return 0;
}