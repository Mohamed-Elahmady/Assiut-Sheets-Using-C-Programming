#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int n, n1, n2;

int main(){
    scanf("%d",&n);
    
    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d", &n1, &n2);
        int min = n1<n2?n1:n2;
        int max = n1>n2?n1:n2;
        int sum = 0;
        
        for (int j = min+1; j < max; j++)
        {
            if (j%2 != 0)
            {
                sum += j;
            }
        }
        printf("%d\n", sum);
    }
    
    return 0;
}