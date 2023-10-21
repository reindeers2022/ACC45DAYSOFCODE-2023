/*
Chef is setting up a perfect bath for himself. He has X litres
of hot water and Y litres of cold water.
The initial temperature of water in his bathtub is A degrees.
On mixing water, the temperature of the bathtub changes as
following:

    The temperature rises by 1 degree on mixing 1 litre of
    hot water.
    The temperature drops by 1 degree on mixing 1 litre of
    cold water.

Determine whether he can set the temperature to B degrees
for a perfect bath.
*/
#include <stdio.h>
int main() {
  int a, b, x, y, t, i=0, ans[2000];
  scanf("%d", &t);
  while (i!=t) {
    scanf("%d %d %d %d", &a, &b, &x, &y);
    if (a > b) {
      if ((a-b) <= y)
      ans[i] = 1;
    }
    else if (a < b) {
      if ((b-a) <= x)
      ans[i] = 1;
    }
    else if (a == b) {
      ans[i] = 1;
    }
    else {
      ans[i] = 0;
    }
    i=i+1;
  }
  for (i=0;i!=t;i=i+1) {
    if (ans[i] == 1)
    printf("YES\n");
    else if (ans[i] == 0)
    printf("NO\n");
  }
  return 0;
}
