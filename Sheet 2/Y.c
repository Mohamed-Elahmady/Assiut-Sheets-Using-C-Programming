#include <stdio.h>
#include <stdlib.h>

int main() {
  int n = 0;
  int p1 = 0, p2 = 1, current = 0;
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    printf("%d ", current);
    current = p1 + p2;
    p2 = p1;
    p1 = current;
  }
  printf("\n");
}