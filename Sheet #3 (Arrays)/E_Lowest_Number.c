#include <limits.h>
#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  int min_number = INT_MAX;
  int min_index = -1;

  for (int i = 0; i < n; i++) {
    if (arr[i] < min_number) {
      min_number = arr[i];
      min_index = i;
    }
  }
  printf("%d %d", min_number, min_index + 1);
  return 0;
}