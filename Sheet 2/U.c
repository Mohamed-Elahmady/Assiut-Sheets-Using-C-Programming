#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int n = 0;
    int n1 = 0, n2 = 0;
    int count = 0, sum = 0;
    
    scanf("%d %d %d",&n, &n1, &n2);

    for (int i = 1; i <= n; i++)
    {
        int key = i;
        while (key > 0)
        {
            count += key%10;
            key /= 10;
        }
        // printf("%d\n", count);
        if (count >= n1 && count <= n2)
        {
            sum += i;
        }
        // printf("%d\n", sum);
        count = 0;
    }
    printf("%d\n",sum);
    
    return 0;
}