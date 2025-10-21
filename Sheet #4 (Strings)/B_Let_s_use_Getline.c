/*
Problem Link:https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/B
Date:21/10/25
*/

#include <stdio.h>

int main() {
  char str[1000001];
  gets(str);
  int length = strlen(str);
  for (int i = 0; i < length; i++) {
    if (str[i] == '\\') {
      break;
    }
    printf("%c", str[i]);
  }
  return 0;
}