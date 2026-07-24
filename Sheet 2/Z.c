#include <stdio.h>
#include <stdlib.h>

int main() {
  int k = 0, s = 0, counter = 0;
  scanf("%d %d", &k, &s);

  for (int x = 0; x <= k; x++) {
    for (int y = 0; y <= k; y++) {
      int z = s - x - y;
      if (z >= 0 && z <= k) {
        counter++;
      }
    }
  }
  printf("%d\n", counter);
}