#include <stdio.h>
#include <stdlib.h>

short password = 1999, temp;

int main(){
    while (1)
    {
        scanf("%hd",&temp);
        if (temp == password)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }   
    }
    
    return 0;
}