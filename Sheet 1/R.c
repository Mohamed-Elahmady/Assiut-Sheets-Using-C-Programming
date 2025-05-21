#include <stdio.h>
#include <stdlib.h>

unsigned int num,Years,Months,Days;

int main(void){
    scanf("%d",&num);
    while (num > 0)
    {
        if(num >= 365){
            Years++;
            num -= 365;
        }
        else if(num >= 30){
            Months++;
            num -= 30;
        }
        else
        {
            Days = num;
            num -= Days;
        }
    }
    printf("%d years\n%d months\n%d days\n",Years,Months,Days);

    return 0;
}
