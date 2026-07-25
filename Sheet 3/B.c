#include <stdio.h>
#include <stdlib.h>

int Linear_Search(int n, long long arr[n], long long target);
// int Binary_Search(int n, long long arr[n], long long target);

int main() {
  int n = 0;
  scanf("%d", &n);
  long long arr[n], target = 0;
  for (int i = 0; i < n; i++) {
    scanf("%lld", &arr[i]);
  }
  scanf("%lld", &target);
  printf("%d\n", Linear_Search(n, arr, target));
}

int Linear_Search(int n, long long arr[n], long long target) {
  int index = -1;
  for (int i = 0; i < n; i++) {
    if (target == arr[i]) {
      index = i;
      break;
    }
  }
  return index;
}

// int Binary_Search(int n, long long arr[n], long long target) {
//   long long start = 0, end = n - 1;
//   long long mid = (start + end) / 2;
//   int index = -1;
//   while (start <= end) {
//     mid = (start + end) / 2;
//     if (target == arr[mid]) {
//       index = mid;
//       break;
//     } else if (target > arr[mid]) {
//       start = mid + 1;
//     } else if (target < arr[mid]) {
//       end = mid - 1;
//     }
//   }
//   return index;
// }