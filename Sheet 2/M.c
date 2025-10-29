#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

short n1, n2;
bool found;

bool lucky(short num);

int main(){
    scanf("%hd %hd",&n1, &n2);
    
    for (short i = n1; i <= n2; i++)
    {
        if (lucky(i))
        {
            printf("%d ", i);
            found = true;
        }
    }

    if (!found)
    {
        printf("%d\n", -1);
    }
    
    
    return 0;
}

bool lucky(short num){
    bool flag;
    while (num > 0)
    {
        if (num%10 == 4 || num%10 == 7)
        {
            flag = true;
            num /= 10;
        }
        else{
            flag = false;
            break;
        }
    }
    return flag;
}