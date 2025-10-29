#include <stdio.h>
#include <stdlib.h>

short n;
int max, temp = 0;

int main(){
    scanf("%hd",&n);
    for (short i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        if(temp > max){
            max = temp;
        }
    }
    printf("%d\n",max);
    
    return 0;
}