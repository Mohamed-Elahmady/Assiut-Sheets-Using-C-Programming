#include <stdio.h>
#include <stdlib.h>

short n1,n2;

int main(){    
    while (1)
    {
        scanf("%hd %hd", &n1, &n2);
        
        if (n1 <= 0 || n2 <= 0)
        {
            break;
        }
        else
        {
            short min = n1<n2?n1:n2;
            short max = n1>n2?n1:n2;
            short sum = 0;
            for (short i = min; i <= max; i++)
            {
                printf("%d ", i);
                sum += i;
            }
            printf("sum =%hd\n",sum);
        }
    }
    
    return 0;
}