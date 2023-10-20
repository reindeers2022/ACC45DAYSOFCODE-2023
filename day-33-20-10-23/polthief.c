/*
Chef discovered that his secret recipe has been stolen. He
immediately informs the police of the theft.

It is known that the policeman and thief move on the
number line. You are given that:

    The initial location of the policeman on the number
    line is X and his speed is 2 units per second.
    The initial location of the thief on the number line
    is Y and his speed is 1 unit per second.

Find the minimum time (in seconds) in which the policeman can
catch the thief. Note that, the policeman catches the thief as
soon as their locations become equal and the thief will try to
evade the policeman for as long as possible.
*/
#include <stdio.h>
int main() {
  int t, x, y, i=0, min_time=0, ans[1000];
  scanf("%d", &t);
  while (i != t) {
    scanf("%d %d", &x, &y);
    while (x != y) {
      if (y > x) {
        x = x + 2;
        y = y + 1;
      }
      else if (y < x) {
        x = x - 2;
        y = y - 1;
      }
      min_time = min_time + 1;
    }
    ans[i] = min_time;
    min_time = 0;
    i = i + 1;
  }
  for (i=0; i!=t; i=i+1) {
    printf("%d\n", ans[i]);
  }
  return 0;
}
