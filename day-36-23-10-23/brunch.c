/*
On a sunny Sunday afternoon, Chef prepared a brunch for
his 20 neighbours.
Chef prepared a total of X plates. However, the meal was
so good that the neighbours started taking Y plates each.

Find the maximum number of neighbours Chef can feed completely.
*/
#include <stdio.h>
int main() {
  int t, x, y, i=0, can_feed;
  scanf("%d", &t);
  while (i!=t) {
    scanf("%d %d", &x, &y);
    can_feed = x/y;
    if (can_feed < 20)
    printf("%d\n", can_feed);
    else if (can_feed >= 20)
    printf("%d\n", 20);
    i = i + 1;
  }
  return 0;
}
