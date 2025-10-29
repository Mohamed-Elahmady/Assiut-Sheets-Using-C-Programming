#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int n;

bool prime(int num);

int main(){
    scanf("%d",&n);
    
    for (int i = 1; i <= n; i++)
    {
        if(prime(i)){
            printf("%d ",i);
        }
    }
    
    return 0;
}

bool prime(int num){
    if (num == 1)
        return false;
    else if(num == 2)
        return true;

    for (short i = 2; i*i <= num; i++)
    {
        if(num%i == 0){
            return false;
        }
    }
    return true;
}