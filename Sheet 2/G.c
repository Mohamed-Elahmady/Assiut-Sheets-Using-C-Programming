#include <stdio.h>
#include <stdlib.h>

short n;

long long factorial(short num);

int main(){
    scanf("%hd",&n);
    long long facts[n];
    for (char i = 0; i < n; i++)
    {
        scanf("%lld", &facts[i]);
    }
    for (char i = 0; i < n; i++)
    {
        facts[i] = factorial(facts[i]);
    }
    for (char i = 0; i < n; i++)
    {
        printf("%lld\n",facts[i]);
    }
    

    return 0;
}

long long factorial(short num){
    long long sum = 1;
    for (short i = 1; i <= num; i++)
    {
        sum *= i;
    }
    return sum;
}