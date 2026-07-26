#include <stdio.h>
#include <stdlib.h>

int main() {
  int n1 = 0, n2 = 0;
  scanf("%d", &n1);
  long long min = 1e18;
  for (int i = 0; i < n1; i++) {
    scanf("%d", &n2);
    long long arr[n2], temp;
    min = 1e18;
    for (int j = 0; j < n2; j++) {
      scanf("%lld", &arr[j]);
    }
    for (int k = 0; k < n2; k++) {
      for (int l = 0; l < k; l++) {
        temp = arr[k] + arr[l] + k - l;
        if (min >= temp) {
          min = temp;
        }
      }
    }
    printf("%lld\n", min);
  }
}