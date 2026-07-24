#include <stdio.h>
#include <stdlib.h>

int main() {
  int n = 0, sum = 0;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    if (arr[i] == 0x0000) {
      sum = 0x0000;
    } else {
      for (int j = 0; j < 32; j++) {
        if (((arr[i] >> j) & 0x0001) == 0x0001) {
          sum = (sum << 1) + 0x0001;
        }
      }
    }
    printf("%d\n", sum);
    sum = 0;
  }
}