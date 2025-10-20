#include <stdio.h>
#include <string.h>

int main() {
  int n;
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    char arr[101];
    scanf("%s", arr);
    int length = strlen(arr);

    if (length <= 10) {
      printf("%s\n", arr);
    } else {
      printf("%c%d%c\n", arr[0], length - 2, arr[length - 1]);
    }
  }

  return 0;
}
