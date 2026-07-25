#include <stdio.h>
#include <stdlib.h>

int main() {
  int n = 0, flag = 1;
  scanf("%d", &n);
  long long arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%lld", &arr[i]);
  }
  for (int i = 0; i < n; i++) {
    if (arr[i] != arr[n - i - 1]) {
      flag = 0;
    }
  }
  if (flag) {
    printf("YES\n");
  } else {
    printf("NO\n");
  }
}