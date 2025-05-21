#include <stdio.h>
#include <stdlib.h>

unsigned int num;
int digit;

int main(void){
    scanf("%d",&num);
    while (num > 0)
    {
        digit = num%10;
        num/=10;
    }
    if((digit & 0x01) == 1)
        printf("ODD\n");
    else
        printf("EVEN\n");
    

    return 0;
}
