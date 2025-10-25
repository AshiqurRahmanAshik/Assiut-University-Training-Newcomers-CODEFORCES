/*
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I
Date: 25/10/15
*/

#include <limits.h>
#include <stdio.h>

int main() {

  int tc;
  scanf("%d", &tc);
  while (tc--) {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
    }
    int max_number = INT_MAX;
    for (int i = 0; i < n - 1; i++) {
      for (int j = i + 1; j < n; j++) {
        int value = arr[i] + arr[j] + j - i;
        if (value < max_number) {
          max_number = value;
        }
      }
    }
    printf("%d\n", max_number);
  }
  return 0;
}