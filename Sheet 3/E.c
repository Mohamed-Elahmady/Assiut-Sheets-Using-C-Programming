#include <stdio.h>
#include <stdlib.h>

int main() {
  int n = 0, index = 0;
  scanf("%d", &n);
  long long arr[n], min = 0;
  for (int i = 0; i < n; i++) {
    scanf("%lld", &arr[i]);
  }
  min = arr[0];
  for (int i = 0; i < n; i++) {
    if (min > arr[i]) {
      min = arr[i];
      index = i;
    }
  }
  printf("%lld %d\n", min, index + 1);
}