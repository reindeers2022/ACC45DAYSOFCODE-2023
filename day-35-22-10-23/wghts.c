/*
Chef is playing with weights. He has an object weighing
W units. He also has three weights each of X,Y and Z
units respectively. Help him determine whether he can
measure the exact weight of the object with one or more
of these weights.

If it is possible to measure the weight of object with
one or more of these weights, print YES, otherwise print NO.
*/
#include <stdio.h>
int main() {
  int w, x, y, z, t, i=0;
  scanf("%d", &t);
  while (i!=t) {
    scanf("%d%d%d%d", &w, &x, &y, &z);
    //w = measure it, x,y,z = available weights
    if (w-x == 0 || w-y == 0 || w-z == 0 || w-x-y-z == 0)
    printf("YES\n");
    else if (w-x-y == 0 || w-x-z == 0 || w-y-z == 0)
    printf("YES\n");
    else
    printf("NO\n");
    i=i+1;
  }
  return 0;
}
