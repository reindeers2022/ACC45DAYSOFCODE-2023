/*
In a test, there are N problems, each carrying X marks.
In each problem, Chef either received X marks or 0 marks.

Determine whether is it possible for Chef to achieve
exactly Y marks.

CONSTRAINTS -
1≤T≤100
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
  int t, n, i=0;
  float must_correct, y, x; // declare variable used in calculation
  int ans[100];

  scanf("%d", &t);
  if (t < 1 || t > 100) {
    printf("1≤T≤100\n");
    exit(0);
  }
  while (i != t) {
    // n = no. of problems, x = marks awarded if correct,
    // y = exactly achieve y marks
    scanf("%d %d %d", &n, &x, &y);
    must_correct = y/x;
    if (floor(must_correct) == must_correct && must_correct <= n) {
      ans[i] = 1;
    }
    else {
      ans[i] = 0;
    }

    i = i + 1;
  }
  for (i=0;i!=t;i=i+1) {
    if (ans[i] == 1)
    printf("YES\n");
    else
    printf("NO\n");
  }
  return 0;
}
