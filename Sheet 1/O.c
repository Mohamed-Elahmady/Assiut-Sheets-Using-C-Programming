#include <stdio.h>
#include <stdlib.h>

unsigned int n1,n2;
char op;

int main(void){
    scanf("%d%c%d",&n1,&op,&n2);
    
    switch (op)
    {
    case '+':
        printf("%d",(n1+n2));
        break;
    case '-':
        printf("%d",(n1-n2));
        break;
    case '*':
        printf("%d",(n1*n2));
        break;
    case '/':
        printf("%d",(n1/n2));
        break;
    default:
        break;
    }

    return 0;
}
