#include <stdio.h>
#include <stdlib.h>

int main() {
  int n1 = 0, n2 = 0;
  scanf("%d", &n1);
  for (int i = 0; i < n1; i++) {
    scanf("%d", &n2);
    long long arr[105];
    for (int j = 0; j < n2; j++) {
      scanf("%lld", &arr[j]);
    }
    
    for (int j = 0; j < n2; j++) {
      long long max = arr[j];
      for (int k = j; k < n2; k++) {
        if (max <= arr[k]) {
          max = arr[k];
        }
        printf("%lld ", max);
      }
    }
    printf("\n");
  }
  return 0;
}
