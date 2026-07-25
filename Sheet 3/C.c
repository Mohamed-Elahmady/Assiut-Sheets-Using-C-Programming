#include <stdio.h>
#include <stdlib.h>

int main() {
  int n = 0;
  scanf("%d", &n);
  long long arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%lld", &arr[i]);
  }
  for (int i = 0; i < n; i++) {
    if (arr[i] > 0) {
      printf("1 ");
    } else if (arr[i] < 0) {
      printf("2 ");
    } else {
      printf("%lld ", arr[i]);
    }
  }
}