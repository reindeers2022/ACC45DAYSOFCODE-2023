/*
In a test, there are N problems, each carrying X marks.
In each problem, Chef either received X marks or 0 marks.

Determine whether is it possible for Chef to achieve
exactly Y marks.
*/
#include <stdio.h>
#include <math.h>
int main() {
  int t, n, i=0;
  float must_correct, y, x; // declare variable used in calculation
  char ans[101];

  scanf("%d", &t);
  while (i != t) {
    // n = no. of problems, x = marks awarded if correct,
    // y = exactly achieve y marks
    scanf("%d %d %d", &n, &x, &y);

    must_correct = y/x;
    if (floor(must_correct) == must_correct && must_correct <= n) {
      printf("YES\n");
    }
    else {
      printf("NO\n");
    }

    i = i + 1;
  }
  return 0;
}
