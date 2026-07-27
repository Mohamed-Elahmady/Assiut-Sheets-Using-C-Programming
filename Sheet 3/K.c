#include <stdio.h>
#include <stdlib.h>

int main() {
  int n = 0, sum = 0;
  scanf("%d", &n);
  char arr[n];
  for (int i = 0; i < n; i++) {
    scanf(" %c", &arr[i]);
    sum += arr[i] - '0';
  }

  printf("%d\n", sum);
}
