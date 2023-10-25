/*
Chef has a circular pizza and a knife to cut that into pieces.
He can only cut the pizza in a way such that the knife starts
from the boundary of the pizza, passes the centre, and ends at
the boundary.

Find whether Chef an divide the pizza into N pieces using
any (possibly zero) number of cuts.
*/
#include <stdio.h>
int main() {
  int t, n, i=0, ans[100];
  scanf("%d", &t);
  while (i!=t) {
    scanf("%d", &n);
    if (n%2 == 0 || n == 1)
    ans[i] = 1;
    else
    ans[i] = 0;
    i=i+1;
  }
  for(i=0;i!=t;i=i+1) {
    if (ans[i] == 1)
    printf("YES\n");
    else
    printf("NO\n");
  }
  return 0;
}
