#include <stdio.h>
#include <stdlib.h>

char character;

int main(void){
    scanf("%c",&character);
    
    if (character >= 65 && character < 91)
        printf("%c",(character+32));
    else if (character >= 97 && character < 123)
        printf("%c",(character-32));
    else;

    return 0;
}
