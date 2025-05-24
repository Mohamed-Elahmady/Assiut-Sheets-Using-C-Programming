#include <stdio.h>
#include <stdlib.h>

int n1, n2, equ;
char op, asn;

int main(void)
{
    scanf("%d %c %d %c %d", &n1, &op, &n2, &asn, &equ);
    switch (op)
    {
    case '+':
        if (n1 + n2 == equ)
            printf("Yes\n");
        else
            printf("%d\n", n1 + n2);

        break;

    case '-':
        if (n1 - n2 == equ)
            printf("Yes\n");
        else
            printf("%d\n", n1 - n2);
        break;

    case '*':
        if (n1 * n2 == equ)
            printf("Yes\n");
        else
            printf("%d\n", n1 * n2);
        break;

    default:
        break;
    }

    return 0;
}
