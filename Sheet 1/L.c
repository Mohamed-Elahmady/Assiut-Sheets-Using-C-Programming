#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define Name_length 1000

bool flag = true;

int main(void)
{
    char *name1 = (char *)malloc(Name_length * sizeof(char));
    char *name2 = (char *)malloc(Name_length * sizeof(char));
    
    scanf("%999[^\n]%*c", name1);
    scanf("%999[^\n]%*c", name2);

    /* start edit part by chat */
    // Remove newline character if exists
    name1[strcspn(name1, "\n")] = '\0';
    name2[strcspn(name2, "\n")] = '\0';

    /* end edit part by chat */
    
    char *stpn1 = name1, *stpn2 = name2;

    while (*stpn1 != ' ' && *stpn1 != '\0'){ stpn1++; }
    if (*stpn1 == ' ') stpn1++;

    while (*stpn2 != ' ' && *stpn2 != '\0'){ stpn2++; }
    if (*stpn2 == ' ') stpn2++;

    // for (int i = 0; (*(stpn1 + i) != '\0' && *(stpn2 + i) != '\0'); i++) {
    //     if (*(stpn1 + i) != *(stpn2 + i)) {
    //         flag = false;
    //         break;
    //     }
    // }

    // if (flag && strcmp(stpn1, stpn2) == 0) {
    //     printf("ARE Brothers\n");
    // } else {
    //     printf("NOT\n");
    // }

    if (strcmp(stpn1, stpn2) == 0)
        printf("ARE Brothers\n");
    else
        printf("NOT\n");

    free(name1);
    free(name2);

    return 0;
}
