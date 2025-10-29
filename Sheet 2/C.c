#include <stdio.h>
#include <stdlib.h>

short n = 0;

short evn,odd,pos,neg;

int main(){
    scanf("%hd",&n);
    int arr[n];

    for (short i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (short i = 0; i < n; i++)
    {
        if (arr[i]%2 == 0)
        {
            evn++;
        }else
        {
            odd++;
        }

        if (arr[i] > 0)
        {
            pos++;
        }else if (arr[i] < 0)
        {
            neg++;
        }
        
    }

    printf("Even: %d\n", evn);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);

    return 0;
}