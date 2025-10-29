#include <stdio.h>
#include <stdlib.h>

int num,temporary,palindo;

int main(){
    scanf("%d",&num);
    temporary = num;
    while (temporary > 0)
    {
        palindo = (palindo * 10) + (temporary % 10);
        temporary /= 10;
    }
    
    printf("%d\n", palindo);
    if (palindo == num){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    
    return 0;
}