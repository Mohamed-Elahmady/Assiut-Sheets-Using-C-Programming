#include <stdio.h>
#include <stdlib.h>

int main() {
  int n = 0;
  scanf("%d", &n);
  long long arr[n], sum = 0;
  for (int i = 0; i < n; i++) {
    scanf("%lld", &arr[i]);
    sum += arr[i];
  }
  printf("%lld\n", (sum < 0 ? sum * -1 : sum));
}