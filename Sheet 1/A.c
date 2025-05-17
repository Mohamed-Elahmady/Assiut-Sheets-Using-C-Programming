#include <stdio.h>
#include <stdlib.h>

char txt[100];
int main(void){
    scanf("%[^\n]%*c",txt);
    printf("Hello, %s\n",txt);
    return 0;
}
