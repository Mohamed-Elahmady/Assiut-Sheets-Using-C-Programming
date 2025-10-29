#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int n;

bool prime(int num);

int main(){
    scanf("%d",&n);
    bool prm_num = prime(n);
    if (prm_num)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    
    
    return 0;
}

bool prime(int num){
    if (num == 1)
        return false;
    else if(num == 1)
        return true;
        
    for (short i = 2; i < num; i++)
    {
        if(n%i == 0){
            return false;
        }
    }
    return true;
}