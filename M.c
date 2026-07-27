#include <stdio.h>
#include <stdlib.h>

int main() {
  int n = 0, sum = 0;
  scanf("%d", &n);
  long long arr[n], min, max;
  for (int i = 0; i < n; i++) {
    scanf(" %lld", &arr[i]);
  }
  min = arr[0];
  max = arr[0];
  for (int i = 0; i < n; i++) {
    if (min >= arr[i]) {
      min = arr[i];
    }
    if (max <= arr[i]) {
      max = arr[i];
    }
  }
  for (int i = 0; i < n; i++) {
    if (max == arr[i]) {
      arr[i] = min;
    } else if (min == arr[i]) {
      arr[i] = max;
    }
    printf("%lld ", arr[i]);
  }
  //   printf("%lld %lld\n", min, max);
}
