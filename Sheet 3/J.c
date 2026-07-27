#include <stdio.h>
#include <stdlib.h>

int main() {
  int n = 0, counter = 0;
  scanf("%d", &n);
  long long arr[n], min;
  for (int i = 0; i < n; i++) {
    scanf("%lld", &arr[i]);
  }

  min = arr[0];
  for (int i = 0; i < n; i++) {
    if (min >= arr[i]) {
      min = arr[i];
    }
  }
  for (int i = 0; i < n; i++) {
    if (min == arr[i]) {
      counter++;
    }
  }
  if (counter % 2 != 0) {
    printf("Lucky\n");
  } else {
    printf("Unlucky\n");
  }
}