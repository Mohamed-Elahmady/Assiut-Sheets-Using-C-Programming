#include <stdio.h>
#include <stdlib.h>

char character;

int main(void){
    scanf("%c",&character);
    if(character >= 48 && character < 58)
        printf("IS DIGIT\n");
    else if (character >= 65 && character < 91)
        printf("ALPHA\nIS CAPITAL\n");
    else if (character >= 97 && character < 123)
        printf("ALPHA\nIS SMALL\n");
    else;

    return 0;
}
