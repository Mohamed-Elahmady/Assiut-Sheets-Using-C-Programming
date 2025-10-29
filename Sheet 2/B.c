#include <stdio.h>
#include <stdlib.h>

short n = 0;

int main(){
    scanf("%hd",&n);

    for (short i = 1; i <= n; i++)
    {
        if(i%2 == 0){
            printf("%d\n",i);
        }
        else if (n == 1)
        {
            printf("%d\n",-1);
        }
        
    }
    
    return 0;
}