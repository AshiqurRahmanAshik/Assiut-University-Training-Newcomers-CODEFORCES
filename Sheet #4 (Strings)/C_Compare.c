/*
Problem Link:https://codeforces.com/group/MWSDmqGsZm/contest/219856
Date:21/10/25
*/
#include <stdio.h>

int main() {
  char X[21], Y[21];
  scanf("%s %s", X, Y); // read two strings

  int i = 0;
  // Compare character by character
  while (X[i] != '\0' && Y[i] != '\0') {
    if (X[i] < Y[i]) { // X is smaller
      printf("%s\n", X);
      return 0;
    } else if (X[i] > Y[i]) { // Y is smaller
      printf("%s\n", Y);
      return 0;
    }
    i++; // move to next character
  }

  // If all compared characters are equal, the shorter string is smaller
  if (X[i] == '\0') {
    printf("%s\n", X);
  } else {
    printf("%s\n", Y);
  }

  return 0;
}
