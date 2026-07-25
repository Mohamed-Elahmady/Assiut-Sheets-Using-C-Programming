#include <stdio.h>
#include <stdlib.h>

int main() {
  int n = 0, flag = 1;
  scanf("%d", &n);
  long long arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%lld", &arr[i]);
  }
  // Bubble Sort
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i; j++) {
      if (arr[j] >= arr[j + 1]) {
        arr[j] ^= arr[j + 1];
        arr[j + 1] ^= arr[j];
        arr[j] ^= arr[j + 1];
      }
    }
  }

  // Selection Sort
  // int temp = 0;
  //   for (int i = 0; i < n; i++) {
  //     temp = i;
  //     for (int j = i + 1; j < n; j++) {
  //       if (arr[temp] >= arr[j]) {
  //         temp = j;
  //       }
  //     }
  //     if (temp != i) {
  //       arr[temp] ^= arr[i];
  //       arr[i] ^= arr[temp];
  //       arr[temp] ^= arr[i];
  //     }
  //   }

  for (int i = 0; i < n; i++) {
    printf("%lld ", arr[i]);
  }
}