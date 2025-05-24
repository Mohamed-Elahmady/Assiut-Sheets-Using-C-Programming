#include <stdio.h>
#include <stdlib.h>

int n1,n2;
char co_op;

int main(void){
    scanf("%d %c %d",&n1,&co_op,&n2);
    switch (co_op)
    {
    case '>':
        printf("%s\n",(n1>n2)? "Right":"Wrong");
        break;
    
    case '<':
        printf("%s\n",(n1<n2)? "Right":"Wrong");
        break;

    case '=':
        printf("%s\n",(n1==n2)? "Right":"Wrong");
        break;
    default:
        break;
    }

    return 0;
}
