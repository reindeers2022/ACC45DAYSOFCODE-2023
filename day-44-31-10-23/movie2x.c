/*
Chef started watching a movie that runs for a total of X minutes.

Chef has decided to watch the first Y minutes of the movie at twice the usual speed as he was warned by his friends that the movie gets interesting only after the first Y minutes.

How long will Chef spend watching the movie in total?

Note: It is guaranteed that Y is even.
*/
#include <stdio.h>
int main() {
  int x, y;
  scanf("%d %d", &x, &y);
  printf("%d\n", x-(y/2));
  return 0;
}
