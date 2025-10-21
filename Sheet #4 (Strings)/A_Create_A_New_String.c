/*
Problem Link:https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/A
Date:21/10/25
*/

#include <stdio.h>
#include <string.h>

int main() {
  char S[1001], T[1001];
  scanf("%s", S);
  scanf("%s", T);

  printf("%d %d\n", strlen(S), strlen(T));
  printf("%s %s\n", S, T);

  return 0;
}