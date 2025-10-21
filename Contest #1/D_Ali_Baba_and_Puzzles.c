/*
Problem Link:https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/D
Date:21/10/25
*/

#include <stdio.h>

int main() {
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  if (a + b - c == d) {
    printf("YES");
  } else if (a - b + c == d) {
    printf("YES");
  } else if (a * b + c == d) {
    printf("YES");
  } else if (a + b * c == d) {
    printf("YES");
  } else if (a - b * c == d) {
    printf("YES");
  } else if (a * b - c == d) {
    printf("YES");
  } else {
    printf("NO");
  }
  return 0;
}