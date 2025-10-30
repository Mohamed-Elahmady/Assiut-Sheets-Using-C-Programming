#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int n = 0;
    
    scanf("%d",&n);

    for (int i = 1; i <= 4*n; i++)
    {
        if(i%4 == 0){
            printf("PUM\n");
        }
        else
        {
            printf("%d ", i);
        }
    }
    
    return 0;
}